// class Solution {
// public:
//     int rob(vector<int>& nums) {
//        vector<int>dp(nums.size(),0);
//        dp[0]=nums[0];
//       for(int i=1;i<nums.size();i++){
//         int x=dp[i-1];
//         int y=nums[i];
//         if(i > 1){
//             y= nums[i]+dp[i-2];
//         }
//         dp[i]=max(x,y);
//       } 
//       return dp[nums.size()-1];
//     }
// };




// class Solution {
// public:
//      int f(int i , vector<int>&nums, vector<int>&dp){
//         if(i<0) return 0;

//         if(dp[i]!=-1) return dp[i];
//         int yes=f(i-2, nums,dp)+nums[i];
//         int no= f(i-1,nums,dp);

//         return dp[i]=max(yes,no);

//      }
//     int rob(vector<int>& nums) {
//         vector<int>dp(nums.size(),-1);
//         return f(nums.size()-1,nums,dp);
//     }
// };







// class Solution {
// public:
//     int rob(vector<int>& nums) {
      
//        int prev=nums[0];
//        int prev2=0;
    
//       for(int i=1;i<nums.size();i++){
//         int x=prev;
//         int y= nums[i]+prev2;
        
//         int curr=max(x,y);
//         prev2=prev;
//         prev=curr;
//       } 
//       return prev;
//     }
// };