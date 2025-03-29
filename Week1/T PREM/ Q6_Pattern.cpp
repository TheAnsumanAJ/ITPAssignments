#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter any number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            for (int k=1;k<=n;k++){
                cout <<k;
            }
        }
        cout<<endl;
    }    
    return 0;
}