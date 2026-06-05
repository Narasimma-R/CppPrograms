#include <iostream>

// BUGGY FUNCTION
int* GetPlayerScore() {
    int* score = new int(100); // Local variable (Stack memory)
    
    // TODO: Why is this bad? Fix this function so it safely returns a pointer to a score.
    // Hint: Local variables are destroyed when the function ends.
    // You need memory that survives outside the function (Heap memory using 'new').
    return score;
}

int main() {
    int* myScore = GetPlayerScore();
    
    // Sometimes this prints 100, sometimes it crashes, sometimes it prints garbage like 8439294.
    std::cout << "Player Score is: " << *myScore << "\n";
    
    // TODO: If you fixed the function using 'new', don't forget to clean it up here!
    delete myScore;

    return 0;
}