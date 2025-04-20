#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    for(char &c : str)
        if(c >= 'A' && c <= 'Z')
            c = c + 32;

    cout << "Lowercase string: " << str << endl;
    return 0;
}
