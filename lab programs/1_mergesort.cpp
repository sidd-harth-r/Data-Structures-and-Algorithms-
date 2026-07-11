#include<iostream>
#include<vector>

using namespace std ;
 void func(vector<int>&nums,vector<int>&temp,int s ,int e){
    for(int i=s,j=0;i<=e;i++){
        nums[i]=temp[j++];
    }
 }
 
void merge(vector<int>&nums,int left,int right,int end){
    int i=left;
    int j=right;
    vector<int>temp;
    
    while(i<right && j<=end){
        if (nums[i]<nums[j]){
            temp.push_back(nums[i]);
            i++;
        }
        else{
             temp.push_back(nums[j]);
            j++;
        }
    }

        while(i<right){
            temp.push_back(nums[i]);
            i++;
        }
        while(j<=end){
            temp.push_back(nums[j]);
            j++;
        }

        func(nums,temp,left,end);
    }

void mergeSort(vector<int>&nums,int s,int e){
    if(s>=e){
        return;
    }
    int mid=s+(e-s)/2;
    int left=s;
    int right=mid+1;
    mergeSort(nums,left,mid);
    mergeSort(nums,mid+1,e);
    merge(nums,left,right,e);
    
}


    void print(vector<int>nums ){
        for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
    }

    int main(){
        vector<int>nums={3,2,6,4,9,7};
        mergeSort(nums,0,nums.size()-1);
        print(nums);
        return 0;
    }

