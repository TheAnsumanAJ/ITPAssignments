#include <iostream>
using namespace std;

int main() {
    int n, val = 1;

    cout << "Enter value of n: ";
    cin >> n;
    for (int row = 1; row <= n; row++) {
        for (int i = 0; i < n; i++) {
            cout << val;
            if (i < n - 1)  
                cout << "*";
            val++;
        }
        cout << endl;
    }

    return 0;
}