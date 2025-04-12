#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int smallest = INT_MAX, second = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            second = smallest;
            smallest = arr[i];
        } else if (arr[i] < second && arr[i] != smallest) {
            second = arr[i];
        }
    }

    cout << "Second smallest element: " << second;
    return 0;
}