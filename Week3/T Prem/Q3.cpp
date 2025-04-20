#include <iostream>
using namespace std;

string removeNonAlphabets(string str) {
    string result = "";
    for(int i = 0; str[i]; i++) {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            result += str[i];
        }
    }
    return result;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    string result = removeNonAlphabets(str);
    cout << "String after removing non-alphabets: " << result << endl;
    return 0;
}