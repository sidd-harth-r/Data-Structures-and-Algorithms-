#include<iostream>  
#include <climits>
using namespace std ;

void MaxSubarray1(int *arr,int n){
    int sum=arr[0],maxsum=INT_MIN;
    for(int start =0;start<n;start++){
        for(int end=start;end<n;end++){
            sum=0;
              for(int i=start;i<=end ;i++) {
                
                sum+=arr[i];
            
              }  
        maxsum=max(maxsum,sum) ;   //   if(sum>maxsum) {
            //     maxsum=sum;
            //   }
          
        }
       
    }
    cout<<"the maximum sum of the subarray is : "<<maxsum<<endl;
}

int main(){
    
int arr[]={2,-3,6,-5,4,2};
int n = sizeof(arr)/sizeof(int) ;
MaxSubarray1(arr,n);
return 0;

}
