#include <iostream>
using namespace std;

int main() {
    // 1. Define the lambda to take two integers and return their sum
    auto add = [](int x, int y) {
        return x + y;
    };
    
    int a, b;
    // 2. Correctly chain the cin operators
    cout << "Enter two numbers: ";
    cin >> a >> b; 
    
    cout << "Calling lambda function" << endl;
    // 3. Since the lambda now returns an int, we CAN use cout here
    cout << "The sum is: " << add(a, b) << endl;
    
    return 0;
}