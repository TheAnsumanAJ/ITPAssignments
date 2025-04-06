#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    for (int row = 1; row <= n; row++) {
        for (int i = 1; i <= row; i++) {
            cout << i;
        }

        int spaces = 2 * (n - row);
        for (int s = 1; s <= spaces; s++) {
            cout << " ";
        }

        for (int i = row; i >= 1; i--) {
            cout << i;
        }

        cout << endl;
    }

    return 0;
}