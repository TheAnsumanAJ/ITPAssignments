#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int start = 1;  

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n; j++) {
            cout << start + j; 
            if (j < n - 1) {
                cout << "*"; 
            }
        }
        cout << endl; 
        start += n;  
    }

    return 0;
}