#include <iostream>
#include <deque>
using namespace std;
int main(){
    deque<int> deque;

    deque.push_back(5);
    deque.push_back(6);
    deque.push_back(7);
    deque.push_back(8);
    deque.push_front(4);
    deque.push_front(3);
    deque.push_front(2);
    deque.push_front(1);

    int size = deque.size();

    cout<<"Size of queue : "<<size<<endl;
    cout<<"Front : "<<deque.front()<<endl;
    cout<<"back : "<<deque.back()<<endl;
    cout<<"Mid element : "<<deque.at(size/2)<<endl;

}