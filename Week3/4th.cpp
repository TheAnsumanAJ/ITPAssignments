#include<iostream>
using namespace std;

void rotateRight(int arr[],int size,int k){
    k = k%size;
    int temp[100];
    for(int i=0;i<size;i++){
        temp[(i+k)%size]=arr[i];
    }
    for(int i=0;i<size;i++){
        arr[i]=temp[i];
    }
}
int main(){
    int arr[]={1,2,3,4,5},k=2;
    int size = sizeof(arr);

    rotateRight(arr,size,k);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}