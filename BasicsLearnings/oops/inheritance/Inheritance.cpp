#include <iostream>
using namespace std;

enum Type{
    TWO_WHEELER = 1,
    FOUR_WHEELER = 2 
};

string getVehicleName(Type type){
    switch(type){
        case TWO_WHEELER:
            return "Bike";
        case FOUR_WHEELER:
            return "Car";
        default:
            return "";
    }
}

class Vehicle{
    public:
        Type vehicleType;
};

class Bike : public Vehicle{
    public:
        string name;
        string model;

    string displayInfo(){
        return "Vehicle type : " + getVehicleName(vehicleType) + "\nBike Name: " + name + "\nBike model : " + model;
    }
};

int main(){

    Bike bike;
    bike.vehicleType = TWO_WHEELER;
    bike.name = "Honda";
    bike.model = "Unicron";

    cout<<bike.displayInfo()<<endl;

}