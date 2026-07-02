#include <iostream>
#include <memory>
#include <queue>
#include <functional>
using namespace std;

class Actor{

    public:
        virtual ~Actor(){
            cout<<"Actor destroyed"<<endl;
        }

};

class Weapon : public Actor{
    public:
        virtual int Attack() = 0;
        virtual string GetWeaponName() = 0;
};

class Rifle : public Weapon{
    public:
        int Attack() override {
            return 30;
        }

        string GetWeaponName() override {
            return "RIFLE";
        }

        ~Rifle(){
            cout<<"Rifile destroyed"<<endl;
        }
};

class Sword : public Weapon{
    public:
        int Attack() override{
            return 80;
        }

        string GetWeaponName() override {
            return "SWORD";
        }

        ~Sword(){
            cout<<"Sword destroyed"<<endl;
        }
};

class ActorComponent{
    public:
        ActorComponent(){
            cout<<"ActorComponent Called"<<endl;
        }

        virtual ~ActorComponent(){
            cout<<"ActorComponent Deleted"<<endl;
        }
};

class HealthComponent : public ActorComponent{

    int health;

    public:

        std::function<void()> OnDeathCallback;

        HealthComponent(){
            this->health = 100;
            cout << "Health Component created with initial health "<< health<< "!!"<< endl;
        }

        bool TakeDamage(int Damage){
            health -= Damage;
            cout<<"Health after Taking Damage : "<<health<<endl;
            return IsAlive();
        }

        bool IsAlive(){
            if(this->health <= 0){
                OnDeathCallback();
                return false;
            }
            return true;
        }

};

class Player{
    private: 
        unique_ptr<Weapon> CurrentWeapon;
        unique_ptr<HealthComponent> healthComponent;
        int MaxCapacity = 3;
        queue<unique_ptr<Weapon>> Inventory;
    
    public:
        Player(){
            healthComponent = make_unique<HealthComponent>();

            healthComponent->OnDeathCallback = [this](){
                this->OnDeath();
            };
        }

        Weapon* GetCurrentWeapon(){
            return CurrentWeapon.get();
        }

        void EquipWepon(unique_ptr<Weapon> weapon){

            cout<<"Adding "<< weapon->GetWeaponName() <<endl;

            if(Inventory.size() >= MaxCapacity){
                Drop();
            }

            if(CurrentWeapon){
                Inventory.push(std::move(CurrentWeapon));
            }

            CurrentWeapon = std::move(weapon);
        }

        void Attack(){
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            if(CurrentWeapon){
                cout<<"Attacking with "<<CurrentWeapon->GetWeaponName()<< endl;
                int DamageTaken = CurrentWeapon->Attack();
                healthComponent->TakeDamage(DamageTaken);
            }else {
                cout<<"No Weapon eqiped" << endl;
            }
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n"<<endl;
        }

        void PrintAllWepons(){

            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<"Printing All weapons"<<endl;

            if(Inventory.empty()){
                cout<<"No Items in Inventory"<<endl;
                cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n"<<endl;
                return;
            }

            int i = 0;
            while (i++ < Inventory.size())
            {
                unique_ptr<Weapon> temp = std::move(Inventory.front());
                cout<<" - "<<temp->GetWeaponName()<<endl;

                Inventory.pop();
                Inventory.push(std::move(temp));
            }
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n"<<endl;
        }

        void Drop(){
            cout<<"Dropping "<<Inventory.front()->GetWeaponName()<<endl;
            Inventory.pop();
        }

        void OnDeath(){

            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<"Player Death"<<endl;

            while(!Inventory.empty()){
                cout<<"Dropping "<<Inventory.front()->GetWeaponName()<<endl;
                Inventory.pop();
            }
            cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n"<<endl;
        }

        bool IsAlive(){
            return healthComponent->IsAlive();
        }
};

int main(){

    Player player;
    player.EquipWepon(make_unique<Rifle>());
    player.Attack();
    player.EquipWepon(make_unique<Rifle>());
    player.Attack();
    player.EquipWepon(make_unique<Sword>());
    player.Attack();
    
    player.PrintAllWepons();

}