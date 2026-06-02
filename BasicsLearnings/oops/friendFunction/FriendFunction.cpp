#include <iostream>
using namespace std;

class Student{
    string id;
    string name;

    public:
        void setId(string id){
            this->id = id;
        }

        void setName(string name){
            this->name = name;
        }

    friend string getStudentInfo(Student student);
};

string getStudentInfo(Student student){
    return "StudentId : " + student.id + " \nStudent Name : " + student.name;
}

int main(){
    Student student;
    student.setId("1");
    student.setName("Levi");

    cout<<getStudentInfo(student)<<endl;
}