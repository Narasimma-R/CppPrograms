#include <iostream>
#include <limits.h>
using namespace std;

int MaxValue = 5;

class Bullet{
    public:
        void MoveForward(){
            cout<<"Bullet moving forward!!"<<endl;
        }
};

void FireBullet(){

    Bullet *bullet = new Bullet();
    
    bool HitedWall = false;

    int randomNum = rand() % 101;
    int i = 0;

    cout<<"Random number : "<<randomNum<<endl;

    while(!HitedWall){
        if(i >= randomNum){
            HitedWall = true;
            cout<<"Bullet hitted the wall!!"<<endl;
        }else{
            i++;
            bullet->MoveForward();
        }
    }

    delete bullet;
    bullet = nullptr;
}

int main(){

    for(int i = 0 ; i < MaxValue; i++){
        FireBullet();
    }

}