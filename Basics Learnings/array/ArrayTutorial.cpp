#include <iostream>
using namespace std;

/**
 * We can’t pass array as a parameter and use it in forEach
 * because it passes as a pointer we can use it only by traditional loop
 **/
void forEach(int array[], int size) {
    for (int i = 0; i < size; i++ ) {
        cout << array[i] << endl;
        array[i] = array[i] * 2;
    }
    cout << endl;
}

int main() {
    int array[] = {1,2,3,4,5};
    forEach(array, sizeof(array)/ sizeof(array[0]));
    for (int i : array) {
        cout << i << endl;
    }
}
