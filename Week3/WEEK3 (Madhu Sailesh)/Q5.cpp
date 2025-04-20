#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) cin >> arr[i];

    int distinct[n], count = 0;
    for(int i = 0; i < n; i++) {
        bool isDuplicate = false;
        for(int j = 0; j < count; j++) {
            if(arr[i] == distinct[j]) {
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate)
            distinct[count++] = arr[i];
    }

    cout << "Array without duplicates:\n";
    for(int i = 0; i < count; i++) cout << distinct[i] << " ";
    return 0;
}
