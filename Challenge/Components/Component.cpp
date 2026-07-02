#include <iostream>
#include <memory>
using namespace std;

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
            return this->health > 0;
        }

};

class Player {

    unique_ptr<HealthComponent> healthComponent;

    public:
        Player(){
            healthComponent = make_unique<HealthComponent>();
        }

        bool TakeHit(int Damage){
            return healthComponent->TakeDamage(Damage);
        }

        void PrintIsAlive(){
            cout<<"Player is : "<<(healthComponent->IsAlive() ? "Alive" : "Dead")<<endl;
        }
};

int main(){

    Player player;

    player.TakeHit(30);
    player.PrintIsAlive();
    player.TakeHit(80);
    player.PrintIsAlive();
}