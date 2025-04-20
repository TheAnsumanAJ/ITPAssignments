#include<iostream>
using namespace std;

int main(){
    string str;
    char ch;
    getline(cin,str);
    cin>>ch;
    string result =" ";
    for(char c : str){
        if(c != ch){
            result += c;
        }
    }
    cout<<"Updated string:"<<result;
    return 0;
}