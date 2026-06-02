#include <iostream>
using namespace std;
int main(){
    try{
        throw 500;
    }catch(...){
        cout<<"Exception Occured"<<endl;
    }
}