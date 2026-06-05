#include <iostream>
using namespace std;

int main(){
    int* num;
    cin>>*num;

    int &temp = *num;

    cout<<"Temp variable : "<<temp<<endl;
    cout<<"User input variable : "<<*num<<endl;

    cout<<"After change temp"<<endl;

    *num = 5;

    cout<<"Temp variable : "<<temp<<endl;
    cout<<"User input variable : "<<*num<<endl;

}