#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a decimal Number: ";
    cin>>x;
    string binary ="";
    int temp = x;
    while(temp>0){
        binary = to_string(temp%2) + binary;
        temp /= 2;
    }
    cout<<"Binary form of the given decimal number is: "<<binary<<endl;
    string octal ="";
    temp = x;
    while(temp>0){
        octal= to_string(temp%8) + octal;
        temp/=8;
    }
    cout<<"Octal form of the given decimal number is: "<<octal<<endl;
    return 0;
}