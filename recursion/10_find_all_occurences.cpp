// For a given integer array of size N.You have to find all the occurrences(indices) of a given element(Key) and print them.Use a recursive function to solve this problem

#include<iostream>

using namespace std ;

int  PrintAllOccurence(int arr[],int i,int n,int key){
    
    if(i==n){
        return 0 ;
    }
    int count =0;
    if(arr[i]==key) {
        cout<<i<<" ";
        count ++;
    }
count+=  PrintAllOccurence(arr,i+1,n,key);
return count ;
    
}




int main(){
    int arr[]={3,2,4,5,6,2,7,2,2};
    int n=sizeof(arr)/sizeof(int);
    cout<<"\nNunber of occurence is : "<<PrintAllOccurence(arr,0,n,2);
    return 0;
}