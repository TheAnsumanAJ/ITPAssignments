#include <iostream>
using namespace std;

int main() {
    int num, digit, maxDigit = 0;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        digit = num % 10; 
        if (digit > maxDigit)
            maxDigit = digit;
        num = num / 10;
    }

    cout << "The largest digit is: " << maxDigit << endl;

    return 0;
}