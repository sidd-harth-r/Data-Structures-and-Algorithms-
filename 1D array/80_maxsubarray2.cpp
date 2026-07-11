// optimization of the brute force method 

#include<iostream>  
#include<climits>
using namespace std ;

void MaxSubarray2(int *arr, int n){
    int maxsum=INT_MIN;
    for(int start=0;start<n;start++){
        int sum=0;
        for(int end =start;end<n;end++){
            sum+=arr[end];
            maxsum=max(sum,maxsum);

        }
    }
      cout<<"the maximum sum of the subarray is : "<<maxsum<<endl;

}


int main(){
int arr[]={2,-3,6,-5,4,2};
int n = sizeof(arr)/sizeof(int) ;
MaxSubarray2(arr,n);
return 0;

}
