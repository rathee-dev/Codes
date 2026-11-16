#include <iostream>
using namespace std;

int main() {
    int n; // dimensions of matrix
    cout << "Enter the dimensions of the square matrix: " << endl;
    cin >> n;
    int m1[100][100], m2[100][100], soln[100][100] = {0};
    cout << "Enter Elements of Matrix 1:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m1[i][j];
        }
    }

    cout << "Enter Elements of Matrix 2:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> m2[i][j];
        }
    }

    // Matrix multiplication
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                soln[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    cout << "Final Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << soln[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}