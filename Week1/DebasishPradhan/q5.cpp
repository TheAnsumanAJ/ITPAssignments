#include <iostream>
using namespace std;

int main() {
    int num, i = 1, isPerfectSquare = 0;

    cout << "Enter a number: ";
    cin >> num;

    while (i * i <= num) {
        if (i * i == num) {
            isPerfectSquare = 1;
            break;
        }
        i++;
    }

    if (isPerfectSquare)
        cout << num << " is a Perfect Square." << endl;
    else
        cout << num << " is NOT a Perfect Square." << endl;

    return 0;
}