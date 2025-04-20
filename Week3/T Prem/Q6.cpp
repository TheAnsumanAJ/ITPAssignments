#include <iostream>
using namespace std;

string toLowerCase(string str) {
    for(int i = 0; str[i]; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }
    return str;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    string result = toLowerCase(str);
    cout << "String in lowercase: " << result << endl;
    return 0;
}