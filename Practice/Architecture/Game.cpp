#include<iostream>

using namespace std;

class Enemy{

    public:
        virtual void Attack() = 0;
};

class Zombie : public Enemy{

    public:
        void Attack(){
            cout<<"Zombie bites you from close range!"<<endl;
        }
};

class Player : public Enemy{

    public:
        void Attack(){
            cout<<"Player Is Attacking!"<<endl;
        }
};

int main(){

    Enemy *zombie = new Zombie();
    Enemy *player = new Player();

    zombie->Attack();
    player->Attack();

    delete zombie;
    delete player;

}