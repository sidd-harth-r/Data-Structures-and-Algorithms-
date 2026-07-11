#include<iostream>

using namespace std ;

bool is_sorted(int arr[],int n){
    if( n==1) {
        return true ;
    }

    if(arr[n-1]<arr[n-2])  
    {
        return false ;
    }
     return is_sorted(arr,n-1);
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    cout<<is_sorted(arr,n);
    return 0;
}