#include <iostream>
using namespace std;

void getPointerExapmle(){
    /** 
     * Example with pointer 
     * Both food and dinner refer to the same memory location. Changing one affects the other.
    **/

    string food = "Porata";
    string &dinner = food;

    cout<<"Before changing value"<<endl;
    cout<<"Food value : "<<food<<endl;
    cout<<"Dinner value : "<<dinner<<endl;

    cout<<"After changing dinner value"<<endl;
    dinner = "Dosa";
    cout<<"Food value : "<<food<<endl;
    cout<<"Dinner value : "<<dinner<<endl;

    cout<<"Printing address of dinner : "<<&dinner<<endl;
    cout<<"Printing address of food : "<<&food<<endl;
}

void getNormalExample(){
    /** 
     * Example without pointer 
    **/

    string food = "Porata";
    string dinner = food;

    cout<<"Before changing value"<<endl;
    cout<<"Food value : "<<food<<endl;
    cout<<"Dinner value : "<<dinner<<endl;

    cout<<"After changing dinner value"<<endl;
    dinner = "Dosa";
    cout<<"Food value : "<<food<<endl;
    cout<<"Dinner value : "<<dinner<<endl;

    cout<<"Printing address of dinner : "<<&dinner<<endl;
    cout<<"Printing address of food : "<<&food<<endl;
}

int main(){

    getPointerExapmle();
    cout<<"---------------------------------------"<<endl;
    getNormalExample();
}