#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    unordered_map<int, int> freq;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    int maxFreq = 0, maxElem;
    for (auto& pair : freq) {
        if (pair.second > maxFreq) {
            maxFreq = pair.second;
            maxElem = pair.first;
        }
    }

    cout << "Maximum occurring integer: " << maxElem;
    return 0;
}