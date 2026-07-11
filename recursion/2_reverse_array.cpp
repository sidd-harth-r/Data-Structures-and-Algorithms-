#include<iostream>  
using namespace std ;

void reverse_array(int arr[],int i,int n){
    
    if(i>=n/2) return ;
    swap(arr[i],arr[n-1-i]);
    
    reverse_array(arr,i+1,n);
}


int main(){
int arr[]={1,2,3,4,5};
int size=sizeof(arr)/sizeof(int);

reverse_array(arr,0,size);

for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
return 0;

}
