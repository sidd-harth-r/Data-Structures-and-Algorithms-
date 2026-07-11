#include<iostream>
#include<vector>

using namespace std ;

void heapify(vector<int>&nums,int i,int n){
    if(i>=nums.size()) return ;
     int l=2*i+1;
     int r=2*i+2;

     int maxIdx =i;
     if(l<n && nums[l]> nums[maxIdx]){    // nums[l]< nums[maxIdx]  for descending order 
        maxIdx =l;
     }
     if(r<n && nums[r]> nums[maxIdx]){   // nums[r]< nums[maxIdx]   for descending order 
        maxIdx =r;
     }

     swap(nums[i],nums[maxIdx ]);
     if(maxIdx !=i){
        heapify(nums,maxIdx,n);
     }

}

void heapSort(vector<int>&nums){
  int n=nums.size();
  for(int i=n/2-1;i>=0;i--){
    heapify(nums,i,n);// it is important to pass n here 
  }  
  
  for(int i=n-1;i>=0;i--){
    swap(nums[0],nums[i]);
    heapify(nums,0,i);
  }
}

void print(vector<int>nums){
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}

int main(){
vector<int>nums={1,4,2,5,3};
heapSort(nums);
print(nums);
return 0;
}