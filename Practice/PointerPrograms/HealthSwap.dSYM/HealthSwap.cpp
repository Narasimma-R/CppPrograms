#include <iostream>

// TODO: Write the logic to swap the values using pointers
void SwapHealth(int* player1Health, int* player2Health) {
    std::cout<<player1Health<< " " <<player2Health<<std::endl;
    int temp = *player1Health;

    std::cout<<"Temp address : "<< &temp << " Temp value : " << temp << std::endl;

    *player1Health = *player2Health;

    std::cout<<"player1 address : "<< player1Health << " player1 value : " << *player1Health << std::endl;

    *player2Health = temp;

    std::cout<<"player2 address : "<< player2Health << " player2 value : " << *player2Health << std::endl;
}

int main() {
    int heroHealth = 100;
    int bossHealth = 5000;
    
    std::cout << "Before Swap - Hero: " << heroHealth << ", Boss: " << bossHealth << "\n";
    
    SwapHealth(&heroHealth, &bossHealth);
    
    std::cout << "After Swap - Hero: " << heroHealth << ", Boss: " << bossHealth << "\n";
    return 0;
}