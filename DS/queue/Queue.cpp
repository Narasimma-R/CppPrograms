#include <iostream>
#include <queue>
using namespace std;
int main(){

    queue<int> queue;
    queue.push(1);
    queue.push(2);
    queue.push(3);
    queue.push(4);

    int size = queue.size();
    cout<<"Size : "<<size<<endl;
    cout<<"Front value "<<queue.front()<<endl;
    cout<<"Back value "<<queue.back()<<endl;

    queue.pop();
    cout<<"Front value after delete : "<<queue.front()<<endl;

}