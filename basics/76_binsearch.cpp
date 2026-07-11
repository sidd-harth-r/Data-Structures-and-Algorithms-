// only applicable for sorted array
#include<iostream>
using namespace std ;

int BinSearch(int arr[],int n,int key){
    int start =0,end=n-1;
    while(start<=end){
       int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if (key>arr[mid]){
            start=mid+1;
        }
           else{
            end = mid-1;
           } 
        

    }
    return -1;
}

int main(){
     int arr[]={2,4,6,8,10,12,14,16};
    int n=sizeof(arr)/sizeof(int);
    int search =6;
   int i= BinSearch( arr, n, search);
   cout<<i<<endl;
return 0;
}