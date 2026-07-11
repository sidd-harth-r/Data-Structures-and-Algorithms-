#include<iostream>
#include<vector>
#include<stack>

using namespace std ;

void nextGreater(vector<int>&nums,vector<int>&ans){
    stack<int>s;
    for(int i=nums.size()-1;i>=0;i--){
        while(!s.empty() && nums[s.top()]<nums[i] ){
            s.pop();
        }
        if(s.empty()){
            ans[i]=-1;
        }
        else {
            ans[i]=nums[s.top()];
        }
        s.push(i);
    }
}

void print(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}


int main(){
    vector<int>nums={6,8,0,1,3};
    vector<int>ans(nums.size(),0);
    nextGreater(nums,ans);
    
    print(ans);
    return 0;


}