#include <iostream>
using namespace std;

int main()
{
    int mat1[3][3], mat2[3][3], sum[3][3], transpose1[3][3], transpose2[3][3];
    cout << "Enter elements of first 3x3 matrix:"<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++)
            {
                cin >> mat1[i][j];
            }}
    cout << "Enter elements of second 3x3 matrix:"<<endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
                cin >> mat2[i][j];
            }}
    for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                sum[i][j] = mat1[i][j] + mat2[i][j];
            }}
    
    cout << "Sum of matrices:"<<endl;
    for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cout << sum[i][j] << " ";
            }
            cout << endl;
        }
    for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                transpose1[i][j] = mat1[j][i];
            }
        }
    for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                transpose2[i][j] = mat2[j][i];
            }
        }
    int sumTranspose[3][3];
    for(int i = 0; i < 3; i++)
        {for(int j = 0; j < 3; j++){
                sumTranspose[i][j] = transpose1[i][j] + transpose2[i][j];
            }
        }
    
    cout << "Sum of transposes:\n";
    for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cout << sumTranspose[i][j] << " ";
            }
            cout << endl;
        }
    return 0;
}