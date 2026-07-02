#include <iostream>
using namespace std;

class Actor {
public:
    virtual ~Actor() = default;
};

class IInteractable {
public:
    virtual void Interact() = 0;

    virtual ~IInteractable() = default;
};

class Door : public Actor, public IInteractable {
public:
    void Interact() override {
        cout << "Opening the door" << endl;
    }

    ~Door() override = default;
};

class Weapon : public Actor, public IInteractable {
public:
    void Interact() override {
        cout << "Picking weapon" << endl;
    }

    ~Weapon() override = default;
};

class Player {
public:
    void PressInteractKey(IInteractable *iInteractable) {
        iInteractable->Interact();
    }

    ~Player() {
        cout << "Destroying the player" << endl;
    }
};

int main() {
    Player player;

    Weapon weapon;
    Door door;

    player.PressInteractKey(&door);
    player.PressInteractKey(&weapon);
    
}