#include <iostream>
#include <algorithm>
using namespace std;

void removeDuplicates(int arr[], int n) {
    sort(arr, arr + n);
    int temp[n];
    int j = 0;
    for(int i = 0; i < n; i++) {
        if(i == 0 || arr[i] != arr[i - 1]) {
            temp[j++] = arr[i];
        }
    }
    for(int i = 0; i < j; i++) {
        arr[i] = temp[i];
    }
    cout << "Array after removing duplicates: ";
    for(int i = 0; i < j; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    removeDuplicates(arr, n);
    return 0;
}