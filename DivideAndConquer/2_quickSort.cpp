#include<iostream>
using namespace std;

int partition(int arr[],int start,int end ){
    int i=start-1;
    int pivot=end;
    for(int j=start;j<=end-1;j++){
        if(arr[j]<=arr[pivot]){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    i++;
    swap(arr[i],arr[pivot]);
    return i;
}

void QuickSort(int arr[],int start,int end){
    if(start>=end ){
        return ;
    }

    int pivotIdx=partition(arr,start,end);
    QuickSort(arr,start,pivotIdx-1);
    QuickSort(arr,pivotIdx+1,end);
}

void Print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={6,3,7,5,2,4};
    int n=sizeof(arr)/sizeof(int);
    QuickSort(arr,0,n-1);
 Print(arr,n);
    return 0;
}