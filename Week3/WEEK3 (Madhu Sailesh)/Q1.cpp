#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n], temp[n], index = 0;
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) cin >> arr[i];
     for(int i = 0; i < n; i++)
        if(arr[i] < 0) temp[index++] = arr[i];

       for(int i = 0; i < n; i++)
        if(arr[i] >= 0) temp[index++] = arr[i];

     cout << "Array after moving negatives to one side:\n";
    for(int i = 0; i < n; i++) cout << temp[i] << " ";
    return 0;
}
