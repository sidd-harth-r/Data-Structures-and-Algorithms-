// class Solution {
// public:
//  vector<vector<int>>v;

//     void subset(vector<int>&nums,vector<int>&ans,int i){
//         if(i==nums.size()) {
//             v.push_back(ans);
//             return ;
//         }
//         ans.push_back(nums[i]);
//         subset(nums,ans,i+1);
//          ans.pop_back();
//            subset(nums,ans,i+1);
//     }

//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<int>ans;
//         subset(nums,ans,0);
//         return v;
        
        
//     }
// };