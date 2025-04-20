#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n], maxCount = 0, element;
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) cin >> arr[i];

    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) count++;
        }
        if(count > maxCount) {
            maxCount = count;
            element = arr[i];
        }
    }

    cout << "Maximum occurring integer: " << element << " occurred " << maxCount << " times." << endl;
    return 0;
}
