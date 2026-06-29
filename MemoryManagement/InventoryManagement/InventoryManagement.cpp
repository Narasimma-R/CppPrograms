#include <iostream>
#include <vector>
#include <cstdlib> // For rand()
#include <ctime>   // For time()
using namespace std;

int MaxCapacity = 5;
vector<string> Inventory;

bool AddItem(string itemName){

    if(Inventory.size() >= MaxCapacity){
        cout<<"Storage full "<<endl;
        return false;
    }

    Inventory.push_back(itemName);

    cout<<itemName<<" Added to the Inventory "<<endl;

    return true;
}

void ShowInventory(){

    cout<<"Inventory items "<<endl;

    if(!Inventory.empty())
        for(string inventory : Inventory)
            cout<<" - "<<inventory<<endl;
    else
        cout<<"Inventory is empty"<<endl;
}

string RemoveItemFromInventory(){
    string RemovedItem = Inventory.back();
    Inventory.pop_back();
    return RemovedItem;
}

int main(){

    vector<string> items = {"BULLET", "GUN", "ENERGY", "SWORD"};

    int i = 0;
    while(i < 10){
        
        int randNum = rand() % 4;
        string item = items.at(randNum);
        bool IsAdded = AddItem(item);
        
        if(!IsAdded){
            string RemovedItem = RemoveItemFromInventory();
            cout<<"Removed Item from inventory : "<<RemovedItem<<endl;
            AddItem(item);
        }

        i++;
    }

    ShowInventory();

}
