// kadane's algorithm

#include<iostream>  
#include<climits>
using namespace std ;

void MaxSubarray3(int *arr, int n){
    int maxsum=INT_MIN;
    int sum=0;
    for(int start=0;start<n;start++){
       sum+=arr[start];
            maxsum=max(sum,maxsum);
            if(sum<0){
                sum=0;
            }

        }
          cout<<"the maximum sum of the subarray is : "<<maxsum<<endl;
    }
    




int main(){
int arr[]={2,-3,6,-5,4,2};
int n = sizeof(arr)/sizeof(int) ;
MaxSubarray3(arr,n);
return 0;

}
