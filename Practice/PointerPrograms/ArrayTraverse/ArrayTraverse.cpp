#include <iostream>

int ProcessDataStream(int* streamStart, int size) {
    int totalSize = 0;
    
    // TODO: Iterate through the array using ONLY pointer arithmetic (e.g., *(streamStart + i))
    // DO NOT use streamStart[i]
    for(int i = 0; i < size; i++){
        int currentValue = *(streamStart + i);
        std::cout<<"value of pointer : " << currentValue << std::endl;
        totalSize += currentValue;
    }
    
    return totalSize;
}

int main() {
    int videoChunks[] = {1024, 2048, 512, 4096, 128};
    int numberOfChunks = sizeof(videoChunks) / sizeof(videoChunks[0]);
    
    int total = ProcessDataStream(videoChunks, numberOfChunks);
    std::cout << "Total Data Processed: " << total << " bytes\n";
    
    return 0;
}