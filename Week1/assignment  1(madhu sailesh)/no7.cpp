#include <iostream>
using namespace std;

void printPattern(int n) {
    int val = 1;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= n; j++) {
            cout << val;
            if (j < n) cout << "*";
            val++;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    printPattern(n);
    return 0;
}
