// sorting is basically arranging the elements in ascending or desending order 
/* 1. bubble sort
   2. selection sort 
   3. insertion sort 
   4. counting sort 
   */
// larger elenents are pushed to the back by switching the adjacent items in bubble sort
// smaller elemnet in pushed to front 
// an element from unsorted part is placed in the correct position of the sorted part 
// in insertion sort we try and maintain sorted and unsorted part
// coutsort is generally used when the range between the min and amx value is very small,


/*                    built in sort in cpp     O(nlogn) - time complexity

------------   ascending order - sort(start,end )

ex. for an array  arr[n];
sort(arr,arr+n)
   

------------   desending order -sort(start,end,greater<int>())

*/

#include<iostream>
#include<climits>
using namespace std ;

void Bubblesort(int *arr,int n){
    
  
    for(int i=0;i<n-1;i++){
        bool isswap=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j],arr[j+1]);
                isswap=true;
            }
        }
        if(!isswap){
            return;
        }


    }

}


void Selectionsort(int *arr , int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if (arr[minIndex]>arr[j]){
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}


void Insertionsort(int *arr ,int n){
for(int i=1;i<n;i++){
int curr=arr[i];
int prev=i-1;
while(prev>=0 && arr[prev]>curr){
    swap(arr[prev],arr[prev+1]);
    prev--;
}

}
}



void Countingsort(int *arr, int n){
    int freq[100000];
    int Min=INT_MAX;
    int Max=INT_MIN;
    for(int i=0;i<n;i++){
        Min=min(Min,arr[i]);
        Max=max(Max,arr[i]);
    }

    for(int i=0;i<=Max;i++){
        freq[i]=0;
    }

    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }

    for(int i=Min,j=0;i<=Max;i++){
    while(freq[i]>0) {
        arr[j++]=i;
        freq[i]--;
    }
    }

}

void printarr(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}



int main(){
    int arr[]={3,6,2,1,8,7,4,5,3,1};
    int n=sizeof(arr)/sizeof(int);

Countingsort(arr,n);
printarr(arr,n);
    return 0;

}