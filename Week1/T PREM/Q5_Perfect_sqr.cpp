#include<iostream>
using namespace std;
int main(){
    int x;
    cout <<"Enter a Number: ";
    cin>>x;
    int y=0;
    for(int i=1;i<=x/2;i++){
        if(i*i==x){
            y=1;
            break;
        }
    }
    if(x==0 || x==1){
        y=1;
    }
    cout<<(y?"Is Perfect Square":"Not a Perfect Square")<<endl;
    return 0;
}