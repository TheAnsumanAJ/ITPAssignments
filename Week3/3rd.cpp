#include<iostream>
using namespace std;

int main(){
    string str,result=" ";
    getline(cin,str);

    for(char ch:str){
        if(isalpha(ch)){
            result += ch;
        }
    }
    cout<<"only alphabets"<<result;
    return 0;
}