#include <iostream>
#include <string>

struct Item {
    std::string name;
    int damage;
};

int main() {
    // Ithu 3 pointer-gala store panna kudiya oru array (items innum create aagala, slots mattum thaan irukku)
    Item* inventory[3];

    // TODO: Dynamically allocate 3 items using 'new' (e.g., "Sword" with 50 damage, "Bow" with 30 damage)
    // and assign them to the inventory array slots [0], [1], [2].
    Item katana;
    katana.damage = 50;
    katana.name = "KATANA";

    Item rifel;
    rifel.damage = 80;
    rifel.name = "RIFEL";
    
    Item pistol;
    pistol.damage = 30;
    pistol.name = "PISTOL";
    
    inventory[0] = &katana;
    inventory[1] = &rifel;
    inventory[2] = &pistol;
    
    // TODO: Loop through the array and print the item names and damage.
    // Hint: Use the arrow operator (->) to access struct members via a pointer.
    for(int i = 0; i < 3; i++){
        std::cout<<"Weapon name : " << inventory[i]->name << " Damage : " << inventory[i]->damage << std::endl;
    }
    
    
    // TODO: Prevent memory leak! Loop through the array and delete each allocated item.
    
    return 0;
}