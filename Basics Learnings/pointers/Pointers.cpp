#include <iostream>
using namespace std;

int main(){
    
    string favoriteCharacter = "EREN YEAGER";

    // Only takes the address use favoriteCharacter will give error
    string* mainCharacter = &favoriteCharacter;

    cout<<"Value of mainCharacter : "<<*mainCharacter<<endl;
    cout<<"Address of mainCharacter : "<<mainCharacter<<endl;

    cout<<"Changing value of the mainCharacter"<<endl;

    // Same for set value to the pointer
    *mainCharacter = "LEVI ACKERMAN";

    cout<<"Value of mainCharacter : "<<*mainCharacter<<endl;
    cout<<"Address of mainCharacter : "<<mainCharacter<<endl;

    cout<<"Value of favoriteCharacter : "<<favoriteCharacter<<endl;
    cout<<"Address of favoriteCharacter : "<<&favoriteCharacter<<endl;

}