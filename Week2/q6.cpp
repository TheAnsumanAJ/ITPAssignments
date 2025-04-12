#include <iostream>
using namespace std;

int main() {
    int a[3][3], b[3][3], sum[3][3], transA[3][3], transB[3][3], transSum[3][3];

    cout << "Enter 3x3 matrix A:\n";
    for (int i = 0; i < 3; i++) 
        for (int j = 0; j < 3; j++) cin >> a[i][j];

    cout << "Enter 3x3 matrix B:\n";
    for (int i = 0; i < 3; i++) 
        for (int j = 0; j < 3; j++) cin >> b[i][j];

    cout << "Sum of matrices:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transpose of A:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transA[i][j] = a[j][i];
            cout << transA[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transpose of B:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transB[i][j] = b[j][i];
            cout << transB[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Sum of transposed matrices:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transSum[i][j] = transA[i][j] + transB[i][j];
            cout << transSum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}