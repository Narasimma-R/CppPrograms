#include <iostream>
#include <stack>
using namespace std;

void add (stack<int>& nums){
    nums.push(4);
    nums.push(3);
    nums.push(2);
    nums.push(1);
}

void printStack(stack<int>& nums){
    stack<int> res;
    while(!nums.empty()){
        cout<<nums.top()<<endl;
        res.push(nums.top());
        nums.pop();
    }

    while(!res.empty()){
        nums.push(res.top());
        res.pop();
    }
    
    // return nums;
}

int main(){
    stack<int> nums;
    add(nums);
    cout<<"After adding elements"<<endl;
    printStack(nums);
}