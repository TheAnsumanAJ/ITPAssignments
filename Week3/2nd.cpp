#include<iostream>
using namespace std;

void moveNegative(int arr[],int size){
    int j=0;
    for(int i=0;i<size;i++){
        if(arr[i]<0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
int main(){
    int arr[]={1,-2,8,-5,-6,7};
    int size=sizeof(arr);

    moveNegative(arr,size);

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}