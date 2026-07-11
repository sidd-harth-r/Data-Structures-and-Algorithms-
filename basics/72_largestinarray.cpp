// finding the largest element in the array

#include<iostream>
using namespace std ;

int main (){
    int arr[]={5,4,3,9,2};
    int largest =arr[0],smallest=arr[0];
    int pos1=0,pos2=0;
    int n=sizeof(arr)/sizeof(int) ;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i] ;
            pos1=i;
        }
           if(arr[i]<smallest){
            smallest=arr[i] ;
            pos2=i;
    }
    cout<<"the largest element in the array is : "<<largest<<" and it is at "<<pos1<<" position\n";
    cout<<"the smallest element in the array is : "<<smallest<<" and it is at "<<pos2<<" position\n";
    return 0;
}