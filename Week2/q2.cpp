#include <iostream>
using namespace std;

void sortArray(int arr[], int size) {
    for (int i = 0; i < size-1; i++)
        for (int j = i+1; j < size; j++)
            if (arr[i] > arr[j]) swap(arr[i], arr[j]);
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    sortArray(arr, n);
    
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}