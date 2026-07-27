#include <iostream>
#include <memory>
using namespace std;

class State{

public:

    State() = default;

    virtual void Enter() = 0;
    virtual void Update() = 0;
    virtual void Exit() = 0;

    virtual ~State(){}
};

class IdleState : public State{

    public:
        void Enter() override{
            cout<<"Player is standing"<<endl;
        }

        void Update() override{
            cout<<"Player is breathing..."<<endl;
        }

        void Exit() override{
            cout<<"Player started moving"<<endl;
        }
};

class AttackState : public State{

    public:
        void Enter() override{
            cout<<"Player has taken weapon"<<endl;
        }

        void Update() override{
            cout<<"Player is Attacking"<<endl;
        }

        void Exit() override{
            cout<<"Player Stoped Attacking"<<endl;
        }
};

class Player{

private:
    unique_ptr<State> CurrentState;

public:
    Player() = default;

    void ChangeCurrentState(unique_ptr<State> newState){
        if (CurrentState){
            CurrentState->Exit();
        }

        CurrentState = std::move(newState);
        CurrentState->Enter();
    }

    void Update(){
        if (CurrentState){
            CurrentState->Update();
        }
    }
};

int main(){

    Player NwePlayer;
    NwePlayer.ChangeCurrentState(make_unique<IdleState>());
    NwePlayer.Update();
    NwePlayer.ChangeCurrentState(make_unique<AttackState>());
    NwePlayer.Update();
    NwePlayer.ChangeCurrentState(make_unique<IdleState>());
    NwePlayer.Update();
}