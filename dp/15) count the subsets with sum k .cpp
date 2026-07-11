// class Solution {
//   public:
  
//      int f(int i, int target , vector<int>&a ,  vector<vector<int>>&dp){
//        if (i == 0) {
//     if (target == 0 && a[0] == 0) return 2;
//     if (target == 0) return 1;
//     if (target == a[0]) return 1;
//     return 0;
// }
         
//          if(dp[i][target]!=-1) return dp[i][target];
         
         
//          int pick =0; 
//          if(target - a[i] >=0){ 
//              pick = f(i-1, target-a[i], a,dp);
//          }
//          int npick= f(i-1,target,a,dp);
         
//          return dp[i][target]=pick + npick;
         
//      }
//     int perfectSum(vector<int>& arr, int target) {
        
//         vector<vector<int>>dp(arr.size(),vector<int>(target+1,-1));
        
//         return f(arr.size()-1, target, arr,dp) ;
        
//     }
// };