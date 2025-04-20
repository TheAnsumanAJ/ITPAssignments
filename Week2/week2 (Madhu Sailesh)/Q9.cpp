#include <iostream>
using namespace std;

void printArray(int arr[], int index, int size) {
    if(index == size) return;
    cout << arr[index] << " ";
    printArray(arr, index + 1, size);
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << "Array elements are:\n";
    printArray(arr, 0, n);
    return 0;
}
