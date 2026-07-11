// class Solution {
//   public:
        
//         int f(int idx , int curr , int wt, vector<int>&val , vector<int>& weight ,  vector<vector<int>>&dp){
//             if(idx ==0 ) {
//                 if(curr + weight[idx] <= wt ) return val[idx];
//                 return 0;
//             }
            
//             if(dp[idx][curr]!=-1) return dp[idx][curr];
//             int npick = f(idx-1, curr, wt , val, weight ,dp);
            
//             int pick =0;
//             if(curr + weight[idx] <= wt ){
//                 pick = val[idx] + f(idx -1 , curr + weight[idx] ,wt, val , weight , dp);
//             }
            
//             return dp[idx][curr] = max(pick, npick);
//         }
        
//     int knapsack(int W, vector<int> &val, vector<int> &wt) {
//          vector<vector<int>>dp(val.size(),vector<int>(W+1,-1));
//          return f(val.size()-1, 0, W, val, wt,dp);
        
//     }
// };