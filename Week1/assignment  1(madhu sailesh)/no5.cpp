#include <iostream>
#include <cmath>
using namespace std;

bool isPerfectSquare(int num) {
    int sqrtNum = sqrt(num);
    return (sqrtNum * sqrtNum == num);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isPerfectSquare(num))
        cout << "It is a perfect square.\n";
    else
        cout << "It is NOT a perfect square.\n";
    return 0;
}
