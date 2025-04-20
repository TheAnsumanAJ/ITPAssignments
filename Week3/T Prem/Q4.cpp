#include <iostream>
using namespace std;

void rotateRight(int arr[], int n, int k) {
    k = k % n;
    int temp[k];
    for(int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    for(int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    for(int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n, k;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter number of positions to rotate: ";
    cin >> k;
    rotateRight(arr, n, k);
    cout << "Array after rotation: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}