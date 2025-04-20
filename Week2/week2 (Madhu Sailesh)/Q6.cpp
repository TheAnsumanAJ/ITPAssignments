#include <iostream>
using namespace std;

int main() {
    int mat1[3][3], mat2[3][3], sum[3][3], trans1[3][3], trans2[3][3];
    cout << "Enter elements for Matrix 1:\n";
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> mat1[i][j];

    cout << "Enter elements for Matrix 2:\n";
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            cin >> mat2[i][j];

    cout << "Sum of original matrices:\n";
    int totalSum = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
            totalSum += sum[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Total sum: " << totalSum << endl;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++) {
            trans1[j][i] = mat1[i][j];
            trans2[j][i] = mat2[i][j];
        }

    cout << "Sum of transposed matrices:\n";
    totalSum = 0;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sum[i][j] = trans1[i][j] + trans2[i][j];
            totalSum += sum[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Total sum after transpose: " << totalSum << endl;
    return 0;
}
