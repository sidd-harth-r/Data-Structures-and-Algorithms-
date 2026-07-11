#include<iostream>
#include<vector>
#include <climits>
#include<algorithm>

using namespace std ;
vector<vector<int>>v;

void permutations(vector<int>&nums,vector<int>ans){
   if( ans.size()==nums.size()){
    v.push_back(ans);
   }
for(int i=0;i<nums.size();i++){
    if(nums[i]!=INT_MAX){
    ans.push_back(nums[i]);
    int j =nums[i];
    nums[i]=INT_MAX;

   permutations(nums,ans);
   ans.pop_back();
   nums[i]=j;
}
}
}

void permuatations2(vector<int>&nums,int i){
if(i==nums.size()){
    v.push_back(nums);
    return ;
}

for(int j=i;j<nums.size();j++ ){
    swap(nums[i],nums[j]);
    permuatations2(nums,i+1);
    swap(nums[i],nums[j]);
}
}

int main(){
    vector<int>nums{6};
    vector<int>ans;
    permutations(nums,ans);
return 0;
}