// class Solution {
// public:
//     int f(int i, int target , vector<int>&nums , vector<unordered_map<int,int>>&dp){
//         if(i==0){
//             if(target ==0 && nums[0]==0) return 2;
//             if(target +nums[0] ==0  || target -nums[0]==0) return 1;
//             return 0;
//         }
//         if(dp[i].count(target)) return dp[i][target];

//         int add= f(i-1,target-nums[i],nums ,dp);
//         int sub=f(i-1, target + nums[i],nums,dp);

//         return dp[i][target]= add +sub;
//     }
//     int findTargetSumWays(vector<int>& nums, int target) {
//        vector<unordered_map<int,int>>dp(nums.size());
//         return f(nums.size()-1,target, nums, dp );
//     }
// };