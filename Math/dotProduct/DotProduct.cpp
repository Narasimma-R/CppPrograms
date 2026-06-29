#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool CanEnemySeePlayer(vector<int> EnemyPosition, vector<int> EnemyForward, vector<int> PlayerPosition){
    vector<int> tempVector;
    tempVector.resize(EnemyForward.size());
    for(int i = 0; i < EnemyPosition.size(); i++)
        tempVector.at(i) = PlayerPosition.at(i) - EnemyPosition.at(i);
    
    int NormalizedValue =  sqrt(pow(tempVector.at(0), 2) + pow(tempVector.at(1), 2));

    tempVector[0] = tempVector[0]/NormalizedValue;
    tempVector[1] = tempVector[1]/NormalizedValue;

    double DotProduct = (tempVector[0] * EnemyForward[0]) + (tempVector[1] * EnemyForward[1]);

    cout<<"DotProduct : "<<DotProduct<<endl;

    return DotProduct > 0.5;
}

int main(){
    vector<int> EnemyPosition = {0, 0};
    vector<int> EnemyForward = {0, 1};
    vector<int> PlayerPosition = {2, 2};

    bool isSeen = CanEnemySeePlayer(EnemyPosition, EnemyForward, PlayerPosition);

    cout<<boolalpha;
    cout<<isSeen<<endl;
}