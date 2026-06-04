#include <iostream>
#include <set>

using namespace std;

void display(set<int> set){
    for (int i : set)   cout<<i<<endl;
}

int main(){
    set<int> set;
    set.insert(4);
    set.insert(3);
    set.insert(2);
    set.insert(1);


    display(set);
    cout<<"Afert removing"<<endl;
    set.erase(1);
    display(set);

}