#include <iostream>
#include <list>
using namespace std;

void printList(list<int> nums){
    for(int i : nums){
        cout<<i<<endl;
    }
}

int main(){

    list<int> nums;
    
    nums.push_back(3);
    nums.push_back(4);
    nums.push_front(2);
    nums.push_front(1);

    cout<<"After adding elements"<<endl;
    printList(nums);
    cout<<"After pop front"<<endl;
    nums.pop_front();
    printList(nums);
    cout<<"After pop last"<<endl;
    nums.pop_back();
    printList(nums);

}