#include<iostream>
using namespace std;
int main(){
    int n,x=1;
    cout << "Enter a number: ";
    cin>>n;
    for(int i=1; i<=3 ; i++){
        for (int j=1; j<=n; j++){
            cout << x;
            x++;
            if(j<n){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}