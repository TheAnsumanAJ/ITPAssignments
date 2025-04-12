#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int alphabets=0,digits=0,characters=0;
    for(char ch : str){
        if(isalpha(ch)){
            alphabets++;
        }else if(isdigit(ch)){
            digits++;
        }else{
            characters++;
        }
    }
    cout<<"Alphabets:"<<alphabets<<"\nDigits:"<<digits<<"\nSpecialCharacters:"<<characters;
    return 0;
}