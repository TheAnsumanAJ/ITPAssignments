#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cout << "Enter three sides of the triangle: ";
    cin >> a >> b >> c;
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        cout << "A triangle can be formed.\n";
        if (a == b && b == c) {
            cout << "It is an Equilateral triangle.\n";
        } else if (a == b || b == c || a == c) {
            cout << "It is an Isosceles triangle.\n";
        } else {
            cout << "It is a Scalene triangle.\n";
        }
    } else {
        cout << "A triangle cannot be formed with these sides.\n";
    }

    return 0;
}