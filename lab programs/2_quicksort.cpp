#include<iostream>
#include<vector>
using namespace std ;

int partition(vector<int>&nums,int s ,int e){
    int i=s-1;
    int pivot=e;
    for(int j=s;j<=pivot-1;j++){
        if(nums[j]<=nums[pivot]){
            i++;
            swap(nums[j],nums[i]);
        }
    }
    i++;
    swap(nums[i],nums[pivot]);
    return i;
}

void Quicksort(vector<int>&nums,int s,int e){
    if(s>=e){
        return;
    }

    int pivotIdx=partition(nums,s,e);
    Quicksort(nums,s,pivotIdx-1);
    Quicksort(nums,pivotIdx,e);

}

  void print(vector<int>nums ){
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
    }

int main(){
        vector<int>nums={3,2,6,4,9,7};
        Quicksort(nums,0,nums.size()-1);
        print(nums);
        return 0;
    }