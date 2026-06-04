#include <iostream>
using namespace std;

class Constructor{

    string name;
    string age;

    public:
        /**
         * Same as functions construcors also defined and write the body outside of the class
         */
        Constructor(string name, string age){
            cout << "Initial value : " << this->name << " " << this->age << endl;
            cout << name << " " << age << endl;
            this->name = name;
            this->age = age;
        }

        void setName(string name){
            this->name = name;
        }

        void setAge(string age){
            this->age = age;
        }

        string getName(){
            return this->name;
        }

        string getAge(){
            return this->age;
        }

        string getInfo(){
            return "Name : " + name + "age : " + age;
        }
};

int main(){
    Constructor cons("Levi Ackerman", "21");
    cout << cons.getInfo();

    cout<<endl<<"--------------------------------------------"<<endl;
    cout<<"Afer changing the age"<<endl;
    cons.setAge("22");
    cout << cons.getInfo();

    cout<<endl<<"--------------------------------------------"<<endl;
    cout<<"Afer changing the name"<<endl;
    cons.setName("Ackerman Levi");
    cout << cons.getInfo();
}