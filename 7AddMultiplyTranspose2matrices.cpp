#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    int mat1[100][100], mat2[100][100], result[100][100];

    // input number of rows nd columns
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    // Input elements of first matrix
    cout << "Enter elements of the first matrix: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat1[i][j];
        }
    }

    // Input the elements second matrix
    cout << "Enter elements of the second matrix: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat2[i][j];
        }
    }

    // Addition
    cout << "Matrix Addition: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    // Multiplication
    cout << "Matrix Multiplication: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = 0; 
            for (int k = 0; k < cols; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    // transpose
    cout << "Transpose of the first matrix: " << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << mat1[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
