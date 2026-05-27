#include <iostream>
using namespace std;

int main(){

    int* num = new int;
    *num = 3;
    cout<<"Num value before delete"<<endl;
    cout<<"Num value : "<<*num<<endl;

    delete num;
    cout<<"Num value after delete"<<endl;
    cout<<"Num value : "<<*num<<endl;

    cout<<"----------------------------------------"<<endl;

    cout<<"Example For Array"<<endl;

    string* names = new string[3];
    names[0] = "Levi";
    names[1] = "Nagi";
    names[3] = "Zoro";
    cout<<"Size of names before deleting : "<<sizeof(names)<<endl;
    for(int i=0; i < 3; i++){
        cout<<names[i]<<endl;
    }

    cout<<"Size of names after deleting : "<<sizeof(names)<<endl;
    delete[] names;
    for(int i=0; i < 3; i++){
        cout<<names[i]<<endl;
    }

}