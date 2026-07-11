#include<iostream>
#include<vector>


using namespace std ;




void merge(int arr[],int start ,int end,int mid){
    vector<int>v;
    int i=start;
    int j=mid+1;

while(i <=mid  && j<=end){
    if(arr[i]<arr[j]){
        v.push_back(arr[i++]);
    }
    else{
        v.push_back(arr[j++]);
    }
}
    while(i<=mid){
        v.push_back(arr[i++]);
    }

     while(j<=end){
        v.push_back(arr[j++]);
    }
    
     for(int i=start,j=0;i<=end;i++){     // copying from vector to original array
        arr[i]=v[j++];
    }
}



void mergeSort(int arr[],int start,int end ){
    if(start>=end) return ;
    int mid= start+ (end-start)/2  ;
 mergeSort(arr,start,mid); // left half 
  mergeSort(arr,mid+1,end); // right half 

merge(arr,start,end ,mid);

}

void Print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[]={6,3,7,5,2,4};
    int n=sizeof(arr)/sizeof(int);
    mergeSort(arr,0,n-1);
    Print(arr,n);

    return 0;
}