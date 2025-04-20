#include <iostream>
using namespace std;

void moveNegative(int arr[], int n) {
    int j = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] < 0){
            if(i != j){
                swap(arr[i], arr[j]);}
            j++;
        }
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
    moveNegative(arr, n);
    cout << "Array after moving negative elements: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}