#include <iostream>
using namespace std;

void convertToBinary(int num) {
    int binary[32], i = 0;
    while (num > 0) {
        binary[i++] = num % 2;
        num /= 2;
    }
    cout << "Binary: ";
    for (int j = i - 1; j >= 0; j--) cout << binary[j];
    cout << endl;
}

void convertToOctal(int num) {
    int octal[32], i = 0;
    while (num > 0) {
        octal[i++] = num % 8;
        num /= 8;
    }
    cout << "Octal: ";
    for (int j = i - 1; j >= 0; j--) cout << octal[j];
    cout << endl;
}

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    convertToBinary(num);
    convertToOctal(num);
    return 0;
}
