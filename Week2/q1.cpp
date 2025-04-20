#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cout << "Enter size of first array: ";
    cin >> n1;
    int a[n1];
    cout << "Enter elements of first array: ";
    for (int i = 0; i < n1; i++) cin >> a[i];

    cout << "Enter size of second array: ";
    cin >> n2;
    int b[n2];
    cout << "Enter elements of second array: ";
    for (int i = 0; i < n2; i++) cin >> b[i];

    int merged[n1 + n2];
    for (int i = 0; i < n1; i++) merged[i] = a[i];
    for (int i = 0; i < n2; i++) merged[n1 + i] = b[i];

    cout << "Merged array in reverse: ";
    for (int i = n1 + n2 - 1; i >= 0; i--) {
        cout << merged[i] << " ";
    }
    return 0;
}