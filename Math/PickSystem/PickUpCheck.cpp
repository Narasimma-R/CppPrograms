#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool IsPlayerInPickupRange(vector<float> *PlayerPosition, vector<float> *PotionPosition, float *PickupRadius){

    float DeltaX = PlayerPosition->at(0) - PotionPosition->at(0);
    float DeltaY = PlayerPosition->at(1) - PotionPosition->at(1);

    float distance = sqrt((DeltaX * DeltaX) + (DeltaY * DeltaY));


    return distance <= *PickupRadius;

}

int main(){
    
    vector<float> PotionPosition = {0.0f, 0.0f};
    vector<float> PlayerPosition = {3.0f, 4.0f};
    float PickupRadius =    2.0f;

    cout<<"Can pick the item : "<<boolalpha<<IsPlayerInPickupRange(&PlayerPosition, &PotionPosition, &PickupRadius)<<endl;
}