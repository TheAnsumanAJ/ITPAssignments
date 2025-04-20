
#include <iostream>
using namespace std;

int main() {
    string str, result = "";
    cout << "Enter a string: ";
    getline(cin, str);

    for(char c : str)
        if(isalpha(c))
            result += c;

    cout << "String with only alphabets: " << result << endl;
    return 0;
}
