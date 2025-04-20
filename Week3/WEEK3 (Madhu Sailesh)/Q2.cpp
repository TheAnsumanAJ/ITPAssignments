#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    int alpha = 0, digit = 0, special = 0;

    for(char c : str) {
        if(isalpha(c)) alpha++;
        else if(isdigit(c)) digit++;
        else special++;
    }

    cout << "Alphabets: " << alpha << "\nDigits: " << digit << "\nSpecial characters: " << special << endl;
    return 0;
}
