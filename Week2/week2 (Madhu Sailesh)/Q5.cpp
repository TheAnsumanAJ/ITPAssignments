#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) cin >> arr[i];

    int first = INT8_MAX, second = INT8_MAX;
    for(int i = 0; i < n; i++) {
        if(arr[i] < first) {
            second = first;
            first = arr[i];
        } else if(arr[i] < second && arr[i] != first) {
            second = arr[i];
        }
    }

    cout << "Second smallest element: " << second << endl;
    return 0;
}
