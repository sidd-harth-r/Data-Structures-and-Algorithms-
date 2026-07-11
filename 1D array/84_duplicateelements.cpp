// third method is using hashsets 

#include<iostream>  
#include<climits>
#include<algorithm>

using namespace std ;

bool isduplicate(int *nums, int n){
  
   for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(nums[i]==nums[j]){
             return 1;
             
        }
    }
   }
  return 0;
    }

    bool isduplicate2(int *nums, int n){
        sort(nums,nums+n);
        for (int i=1;i<n;i++){
            if (nums[i]==nums[i-1]){
                return 1;
            }
        }
        return 0;
    }

 

int main(){
int nums[]={1,2,3,4,1};
int n = sizeof(nums)/sizeof(int) ;

cout<<isduplicate2(nums,n)<<endl;
return 0;

}
