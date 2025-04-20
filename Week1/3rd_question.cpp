#include<iostream>
using namespace std;

int Findgreatest(int num){
    int greatest=0;
    while(num>=0){
        int digit=num%10;
    if(digit>greatest){
        greatest=digit;
    }
        num/=10;
    }
    return greatest;
}
int main(){
    int num;
    cout<<"enter a digit:";
    cin>>num;
    if(cin.fail()){
        cout<<"not working"<<endl;
        return 1;
    }
    if(num<0){
        num=-num;
    }
    cout<<"greatest digit is"<<Findgreatest(num)<<endl;
    return 0;
}