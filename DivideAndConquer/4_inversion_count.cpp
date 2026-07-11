#include<iostream>
#include<vector>

using namespace std ;

int merge(int arr[],int si,int mid,int ei){
    int i=si;
    int j=mid+1;
    int count=0;
    vector<int>temp;
    while(i<=mid && j<=ei){
        if(arr[i]>arr[j]){
         count+=mid-i+1;
   temp.push_back(arr[j++]);
        }
        else{
          temp.push_back(arr[i++]);  
        }
    }
        while(i<=mid){
            temp.push_back(arr[i++]);
        }
        while(j<=ei){
       temp.push_back(arr[j++]);
        }
     for (int i=si,x=0;i<=ei;i++){
       arr[i]=temp[x++];
}
return count;
    }


int inversion_count(int arr[],int si,int ei){
    if(si>=ei) return 0;
    int mid = si+(ei-si)/2;

    int leftCount=inversion_count(arr,si,mid);
    int rightCount=inversion_count(arr,mid+1,ei);

    int crossCount=merge(arr,si,mid,ei);

return leftCount+rightCount+crossCount;
}

int main(){
    int arr[]={2,4,1,3,5};
    int n=sizeof(arr)/sizeof(int);
   cout<< inversion_count(arr,0,n-1)<<endl;

}                     