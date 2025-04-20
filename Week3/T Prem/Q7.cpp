#include <iostream>
using namespace std;

string removeChar(string str, char ch) {
    string result = "";
    for(int i = 0; str[i]; i++) {
        if(str[i] != ch) {
            result += str[i];
        }
    }
    return result;
}

int main() {
    string str;
    char ch;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter character to remove: ";
    cin >> ch;
    string result = removeChar(str, ch);
    cout << "String after removing " << ch << ": " << result << endl;
    return 0;
}