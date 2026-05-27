#include <iostream>
using namespace std;

enum Status{
    FAILED = 0,
    PASSED = 1,
};

string getEnumString(Status status){
    switch (status)
    {
        case PASSED: return "Passed";
        case FAILED: return "Failed";
        default: return "vsd";
    }
};

int main(){
    int mark1;
    int mark2;
    int mark3;
    int mark4;
    int mark5;

    cout<<"Enter 5 subject marks"<<endl;
    cin>>mark1;
    cin>>mark2;
    cin>>mark3;
    cin>>mark4;
    cin>>mark5;

    int sum = mark1 + mark2 + mark3 + mark4 + mark5;

    if(sum >= 250){
        cout<<"Congrats your score is "<<sum<<"/500 "<<getEnumString(PASSED);
    }else{
        cout<<"Your score "<<sum<<"/500 Better luck next time "<<getEnumString(FAILED);
    }
}