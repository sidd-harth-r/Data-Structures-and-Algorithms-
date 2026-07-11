// class Solution {
// public:

//          bool f(int idx , int target, vector<vector<int>>&dp, vector<int>&a){
//          if(target == 0) return true;
//          if(idx < 0) return false ;
//          if(dp[idx][target]!=-1) {
//              return dp[idx][target];
//          }
//          bool nottake = f(idx-1,target,dp,a);
//          bool take=false;
//          if (target >= a[idx]){
//              take = f(idx-1,target-a[idx],dp,a);
//          }
         
//          return dp[idx][target]= take || nottake;
//      }


//     bool canPartition(vector<int>& nums) {
//         int n=nums.size();
//         int sum=0;
//         for(int i=0;i<n;i++ ){
//             sum+=nums[i];
//         }
//         if(sum%2==1) return false;
             
//       vector<vector<int>>dp(nums.size(),vector<int>((sum/2)+1,-1));
//       return f(nums.size()-1,sum/2,dp,nums);
       
//     }
// };