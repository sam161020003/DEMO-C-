#include <iostream>
using namespace std;

// Function to read a matrix of size m x n from the keyboard
void readMatrix(int matrix[][100], int m, int n) {
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
}

// Function to display a matrix of size m x n
void displayMatrix(int matrix[][100], int m, int n) {
    cout << "The matrix is:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int m, n;
    int matrix[100][100];
    
    // Get the size of the matrix from the user
    cout << "Enter the number of rows and columns of the matrix:" << endl;
    cin >> m >> n;
    
    // Read the matrix from the keyboard
    readMatrix(matrix, m, n);
    
    // Display the matrix
    displayMatrix(matrix, m, n);
    
    return 0;
}

