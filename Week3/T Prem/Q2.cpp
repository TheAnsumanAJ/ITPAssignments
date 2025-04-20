#include <iostream>
using namespace std;

void countCharacters(string str) {
    int alpha = 0, digit = 0, special = 0;
    for(int i = 0; str[i]; i++) {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alpha++;
        }
        else if(str[i] >= '0' && str[i] <= '9') {
            digit++;
        }
        else {
            special++;
        }
    }
    cout << "Alphabets: " << alpha << endl;
    cout << "Digits: " << digit << endl;
    cout << "Special characters: " << special << endl;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    countCharacters(str);
    return 0;
}