#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter no of rows";
    cin>>n;
    int i,j,k;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            for(k=1;k<=i;k++){
                cout<<j;
            }
        }
        cout<<endl;
    }
    return 0;
}