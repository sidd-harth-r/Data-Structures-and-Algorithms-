// there are two ways of reversing an array 1. with using extra space    2. without using extra space 
#include<iostream>
using namespace std ;

void ReverseArr(int arr[],int n){
    int start =0;
    int end =n-1;
    while(start<end){

        swap(arr[start],arr[end]);
    // int temp=arr[start];  
    // arr[start]=arr[end];
    // arr[end]=temp;
    start++;
    end --;
    }
}     

void ReverseArr2(int arr[],int n){         // using extra space 
    int copy[n];
    for(int i=0;i<n;i++){
        copy[i]=arr[n-i-1];
    }
 for(int i=0;i<n;i++){
        arr[i]=copy[i];
    }

}

void PrintArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[]={5,4,3,9,2};
    int n=sizeof(arr)/sizeof(int);
    ReverseArr(arr,n);
    // ReverseArr2(arr,n);
    PrintArr(arr,n);
   return 0;
}