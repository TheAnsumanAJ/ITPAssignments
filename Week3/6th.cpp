#include<iostream>
using namespace std;

int main(){
    string str;
    getline(cin,str);

    for(char &ch : str){
        if(ch>='A' && ch <= 'Z'){
            ch +=32;
        }
    }
    cout<<"Lowercase:"<<str;
    return 0;
}