#include <iostream>
using namespace std;

/**
 * Structure example
 **/
struct Car{
    string name;
    string model;
    int year;
};

/**
 * Structure implementation
 **/
struct car_impl : Car {
    float milage;
};

void updateMilage(car_impl car){
    car.milage = 20;
}

int main() {
    car_impl slavi;
    slavi.name = "skoda";
    slavi.model = "sportLine";
    slavi.year = 2026;
    slavi.milage = 18.6;

    car_impl creata;
    creata.name = "Hyundai";
    creata.model = "creata";
    creata.year = 2026;
    creata.milage = 15.6;
    updateMilage(creata);

    cout<<"Car name : "<<slavi.name<<", Model : "<<slavi.model<<", Year : "<<slavi.year<<", milage : "<<slavi.milage<<endl;
    cout<<"Car name : "<<creata.name<<", Model : "<<creata.model<<", Year : "<<creata.year<<", milage : "<<creata.milage<<endl;
}
