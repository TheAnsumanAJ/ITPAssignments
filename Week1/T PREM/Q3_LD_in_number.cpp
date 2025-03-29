#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a Number: ";
    cin>>x;
    int LargestDigit = 0;
    while(x>0){
        int LastDigit = x%10;
        if(LastDigit > LargestDigit){
            LargestDigit = LastDigit;
        }
        x=x/10;
    }
    cout<<"Largest Digit is: "<<LargestDigit<<endl;
    return 0;
}