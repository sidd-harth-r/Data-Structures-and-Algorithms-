// leetcode 88
#include<iostream>
#include<algorithm>
using namespace std ;

void Merge_sorted_array1(int *arr1,int *arr2,int m,int n){
    for(int i=0;i<n;i++){
        arr1[i+m]=arr2[i];
    }

    sort(arr1,arr1+m+n);
}

void Merge_sorted_array2(int *arr1,int *arr2,int m,int n){
   int index=m+n-1;
   int nums1=m-1;
   int nums2=n-1;
   
   while(nums1>=0 && nums2 >=0) {
    if(arr1[nums1]>arr2[nums2]){
        arr1[index]=arr1[nums1];
        nums1--;
    }
        else{
           arr1[index]=arr2[nums2];
        nums2--; 
        }
        index--;
    }
    while(nums2>=0){
        arr1[index]=arr2[nums2];
        index--;
        nums2--;
    }


   }


void printarr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr1[]={1,2,3,0,0,0};
    int m=sizeof(arr1)/sizeof(int);

    int arr2[]={2,5,6};
    int n=sizeof(arr2)/sizeof(int);
     Merge_sorted_array2(arr1,arr2,m-n,n);
   printarr(arr1,m);

}