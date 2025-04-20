#include <iostream>
using namespace std;


bool canFormTriangle(int a, int b, int c) {
   
    return (a + b > c) && (a + c > b) && (b + c > a);
}


void checkTriangleType(int a, int b, int c) {
    if (a == b && b == c) {
        cout << "The triangle is an Equilateral triangle." << endl;
    }
    else if (a == b || b == c || a == c) {
        cout << "The triangle is an Isosceles triangle." << endl;
    }
    else {
        cout << "The triangle is a Scalene triangle." << endl;
    }
}

int main() {
    int side1, side2, side3;

    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;


    if (canFormTriangle(side1, side2, side3)) {
        cout << "The sides can form a triangle." << endl;
 
        checkTriangleType(side1, side2, side3);
    } else {
        cout << "The sides cannot form a triangle." << endl;
    }

    return 0;
}