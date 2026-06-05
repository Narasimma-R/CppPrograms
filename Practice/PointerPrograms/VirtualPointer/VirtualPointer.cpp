#include <iostream>

class Enemy {
public:
    virtual void Attack() {
        std::cout << "Base Enemy Attacks with 10 damage!\n";
    }
    virtual ~Enemy() {} // Safe cleanup
};

class Boss : public Enemy {
public:
    // TODO: Override the Attack function here. 
    // It should print "Boss uses MEGA SMASH with 500 damage!"
    virtual void Attack() {
        std::cout << "Boss uses MEGA SMASH with 500 damage!\n";
    }

    virtual ~Boss(){}
    
};

int main() {
    // TODO: Create a 'Boss' object dynamically using 'new'.
    // BUT store it inside an 'Enemy*' (Base class pointer).
    Enemy* currentTarget = new Boss();
    
    
    // TODO: Call the Attack() function using the currentTarget pointer.
    // If you did it right, it will automatically call the Boss's attack, not the base enemy's attack!
    currentTarget->Attack();
    
    
    // TODO: Clean up memory
    delete currentTarget;
    
    return 0;
}