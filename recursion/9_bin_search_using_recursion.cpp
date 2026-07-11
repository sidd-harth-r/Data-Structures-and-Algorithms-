#include<iostream>
using namespace std;

int BinSearch(int arr[],int i,int j ,int target){
    if(i>j) return -1;
    int mid =(i+j)/2;
    if(arr[mid]==target) return mid ;
else if (arr[mid]<target) {
    return BinSearch(arr,mid+1,j,target);
}
else {
    return BinSearch(arr,i,mid-1,target);
}


}

int main(){
    int arr[]={1,2,3,4,5,6,7} ;
    int n=sizeof(arr)/sizeof(int);
    cout<<BinSearch(arr,0,n-1,5);
    return 0;
}