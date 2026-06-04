#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> nums){

    if(!nums.empty()){
        for(int num : nums)
            cout << num<< endl;
    }
}

int main(){

    vector<int> num;

    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    cout<<"After added elements"<<endl;
    print(num);
    cout<<"After pop"<<endl;
    num.pop_back();
    print(num);
    cout<<"Printing First element"<<endl;
    cout<<num[0]<<endl;
}