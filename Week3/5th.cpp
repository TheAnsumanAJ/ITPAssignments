#include<iostream>
using namespace std;

int removeDuplicates(int arr[],int size,int newArr[]){
    int newSize = 0;
    for(int i=0;i<size;i++){
        bool found=false;
        for(int j=0;j<newSize;j++){
            if(arr[i]==newArr[j]){
                found=true;
                break;
            }
        }
        if(!found){
            newArr[newSize++]=arr[i];
        }
    }
    return newSize;
}
int main(){
    int arr[]={1,2,3,4,2,4,3,5};
    int size=sizeof(arr);
    int newArr[100];
    int newSize = removeDuplicates(arr,size,newArr);
    for(int i=0;i<newSize;i++){
        cout<<newArr[i]<<" ";
    }
    return 0;
}