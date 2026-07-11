#include<iostream>
using namespace std ;

int rotatedSorted(int arr[],int start,int end,int target ){
    if(start>end) return -1;

    int mid =start+ (end-start)/2;


    if(arr[mid]==target)  return mid ;


    else if (arr[start]<=arr[mid]){
        if(arr[start]<=target  && arr[mid]> target){
            return rotatedSorted(arr,start,mid -1,target);

        }

        else {
            
            return rotatedSorted(arr,mid+1,end,target);
}
    }
    else{
        if(arr[mid]<target  && arr[end]>=target){
            return rotatedSorted(arr,mid+1,end,target);
    }

    else {
         return rotatedSorted(arr,start,mid-1,target);
    }
}
}

int main(){
    int arr[]={4,5,6,7,0,1,2,3};
    int n=sizeof(arr)/sizeof(int);
    int target=0;
    cout<<rotatedSorted(arr,0,n-1,target)<<endl;
    return 0;
}