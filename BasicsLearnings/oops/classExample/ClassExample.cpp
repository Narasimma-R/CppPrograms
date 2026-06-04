#include <iostream>
using namespace std;

/**
 * Example for class
 * Also example for inner functions
*/
class Car{
    public:
        string name;
        string model;
        string year;

        string getCarInfo(){
            return "Car name : " + name + "\nModel name : " + model + "\nYear : " + year;
        }
};

class Vechicle{
    public:
        string vehicleType;
        string vehicleName;

        string getVechicleInfo();
};

string Vechicle::getVechicleInfo(){
    return "Vechicle Type : " + vehicleType + " Vechicle Name : " + vehicleName;
}

int main(){

    cout<<"Example for inside function"<<endl;
    Car gtr;
    gtr.name = "NISSAN";
    gtr.model = "GTR-34";
    gtr.year = "2017";

    cout<<gtr.getCarInfo();

    cout<<endl<<"--------------------------------------------"<<endl;

    cout<<"Example for outside function"<<endl;

    Vechicle towWheeler;
    towWheeler.vehicleType = "Two Wheeler";
    towWheeler.vehicleName = "Bike";

    cout<<towWheeler.getVechicleInfo();
}