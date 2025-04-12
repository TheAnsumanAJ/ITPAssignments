#include<iostream>
using namespace std;

bool isPalindrome(string str){
    int st=0,end=str.length()-1;

    while(st<end){
        if(str[st]!=str[end]){
            return false;
        }
        st++;
        end--;
    }
    return true;
}
int main(){
    string str;
    getline(cin,str);
    if(isPalindrome(str)){
        cout<<"Palindrome";
    }else{
        cout<<"Not a Palindrome";
    }
    return 0;
}