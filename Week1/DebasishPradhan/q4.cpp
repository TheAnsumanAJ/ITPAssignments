#include <iostream>
#include <vector>
using namespace std;

void decimalToBinary(int num) {
    vector<int> binary;
    while (num > 0) {
        binary.push_back(num % 2);
        num /= 2;
    }

    cout << "Binary: ";
    if (binary.empty()) {
        cout << 0;
    } else {
        for (int i = binary.size() - 1; i >= 0; i--) {
            cout << binary[i];
        }
    }
    cout << endl;
}

void decimalToOctal(int num) {
    vector<int> octal;
    while (num > 0) {
        octal.push_back(num % 8);
        num /= 8;
    }

    cout << "Octal: ";
    if (octal.empty()) {
        cout << 0;
    } else {
        for (int i = octal.size() - 1; i >= 0; i--) {
            cout << octal[i];
        }
    }
    cout << endl;
}

int main() {
    int decimal;

    cout << "Enter a decimal number: ";
    cin >> decimal;

    decimalToBinary(decimal);
    decimalToOctal(decimal);

    return 0;
}