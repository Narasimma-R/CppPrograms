#include <iostream>
#include <memory>

using namespace std;

class Boss{

    public:
        Boss(){
            cout<<"Boss has spawned!"<<endl;
        }

        ~Boss(){
            cout<<"Boss memory is destroyed automatically!"<<endl;
        }
};

unique_ptr<Boss> LoadBossRoom(){
    return make_unique<Boss>();
}

int main(){
    unique_ptr<Boss> boss = LoadBossRoom();
}