#include <iostream>
using namespace std;

int main() {
    int n, k;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++) cin >> arr[i];
    
    cout << "Enter k (positions to rotate): ";
    cin >> k;
    k = k % n;

    int temp[n];
    for(int i = 0; i < n; i++)
        temp[(i + k) % n] = arr[i];

    cout << "Rotated Array:\n";
    for(int i = 0; i < n; i++) cout << temp[i] << " ";
    return 0;
}
