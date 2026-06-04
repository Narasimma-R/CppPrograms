#include <iostream>
#include <map>

using namespace std;

void display(map<int, string> map){
    for(auto i : map)
        cout<<"Key : " << i.first << " value : " << i.second<<endl;
}

int main(){
    map<int, string> map;
    map.insert({3, "Ichigo"});
    map.insert({2, "Nagi"});
    map.insert({1, "Levi"});

    display(map);

    cout<< "After erase 3"<<endl;
    map.erase(3);
    display(map);

    cout<< "After clear"<<endl;
    map.clear();
    display(map);
}