#include <iostream>

int main() {
    int rows = 3;
    int cols = 3;
    
    // TODO: Dynamically allocate a 2D array (matrix) using double pointers (int**)
    int** severityMatrix = new int*[rows];
    
    for(int i = 0; i < rows; i++)
        severityMatrix[i] = new int[cols];
    
    
    // TODO: Initialize the matrix with incremental values (1 to 9)
    int counter = 0;
    for(int i = 0; i < rows; i++ ){
        for(int j = 0; j < cols; j++ ){
            severityMatrix[i][j] = ++counter;
        }
    }

    
    // Print the matrix
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < cols; ++j) {
            std::cout << severityMatrix[i][j] << " ";
        }
        std::cout << "\n";
    }
    
    // TODO: Very Important! Free the dynamically allocated memory to prevent memory leaks.
    // Deletion strictly order-la nadakanum.
    // for(int i = 0; i < rows; i++)
        // delete []severityMatrix[i];

    delete []severityMatrix;

    std::cout<<sizeof(severityMatrix)/ sizeof(severityMatrix[0])<<std::endl;
    
    return 0;
}