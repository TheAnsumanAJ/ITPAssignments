#include <iostream>
using namespace std;

int main() {
    int num, maxDigit = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (num > 0) {
        int digit = num % 10;
        if (digit > maxDigit)
            maxDigit = digit;
        num /= 10;
    }
    cout << "Largest digit: " << maxDigit << endl;
    return 0;
}
