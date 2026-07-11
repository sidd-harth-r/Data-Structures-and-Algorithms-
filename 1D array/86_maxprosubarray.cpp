#include<iostream>  
#include<climits>
using namespace std ;

void MaxproSubarray1(int *arr, int n){
    int  maxpro=INT_MIN;
    for(int start=0;start<n;start++){
        int pro=1;
        for(int end =start;end<n;end++){
            pro*=arr[end];
            maxpro=max(maxpro,pro);
            
            
        }

    }
    cout<<" the maximum product is "<<maxpro<<endl;
}

    void MaxproSubarray2(int *arr, int n){
    int  maxpro=INT_MIN;
    int prefix=1;
    int suffix=1;

    for(int i=0;i<n;i++){
       prefix=prefix*arr[i];
       suffix=suffix*arr[n-i-1];
       maxpro=max(maxpro,max(prefix,suffix));
if(prefix==0){
    prefix=1;
}
if(suffix==0){
    suffix=1;
}

    }
    cout<<" the maximum product is "<<maxpro<<endl;
}
    
    




int main(){
int arr[]={2,3,-2,4};
int n = sizeof(arr)/sizeof(int) ;
MaxproSubarray2(arr,n);
return 0;

}
