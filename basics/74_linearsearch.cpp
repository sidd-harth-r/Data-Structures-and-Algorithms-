// search key =10
// arr={2,4,6,8,10,12,14,16}
#include<iostream>
using namespace std ;
 
int linearSearch(int arr[],int n,int search){
    
    for(int i=0;i<n;i++){
        if(arr[i]==search){
            
            return i ;
        
        }
    }
    return -1;

}

int main(){
    int arr[]={2,4,6,8,10,12,14,16};
    int n=sizeof(arr)/sizeof(int);
    int search =10;
   int i= linearSearch( arr, n, search);

if(i==-1){
    cout<<"the search element is not found in the array \n";
}
else {
    cout<<"the search element is found at "<<i<<" position"<<endl;
}
    return 0;

}