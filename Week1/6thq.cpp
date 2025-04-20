#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    // Outer loop for number of rows
    for (int i = 1; i <= n; i++) {
        // Loop for printing the numbers in each row
        for (int j = 1; j <= n - i + 1; j++) {
            for (int k = 1; k <= i; k++) {
                cout << j;
            }
        }
        cout << endl;
    }

    return 0;
}