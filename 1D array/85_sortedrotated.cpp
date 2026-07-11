// question is asked to solve in O(logn)
// there will be one half which sorted first identify it 


#include<iostream>  
#include<climits>
using namespace std ;

int target_pos(int *arr, int n,int target){
    int start=0,end=n-1;

    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]== target){
            return mid;
        }
        else if(arr[start]<=arr[mid]){
            if(target>=arr[start] && target<arr[mid]){
                end=mid-1;
            }
            else {
                start=mid+1;
            }
        }
            else{
               if(target>arr[mid] && target<=arr[end]){
                start=mid+1;
               }
               else {
                end=mid-1;

               }
            }
        }
        return -1;
    }
    


   




int main(){
int arr[]={4,5,6,7,0,1,2};
int target =0;
int n = sizeof(arr)/sizeof(int) ;

cout<<" the target is found at : "<<target_pos(arr,n,target)<<endl;
return 0;

}
