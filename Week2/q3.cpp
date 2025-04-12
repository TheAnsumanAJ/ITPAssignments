#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int a[n], b[n];
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) b[i] = a[i];

    cout << "Copied array: ";
    for (int i = 0; i < n; i++) cout << b[i] << " ";
    return 0;
}