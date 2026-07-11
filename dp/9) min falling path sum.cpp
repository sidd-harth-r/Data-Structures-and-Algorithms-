// class Solution {
// public:

//    int f(int i,int j , vector<vector<int>>&matrix , vector<vector<int>>& dp){
//     if(j<0 || j>=matrix[0].size()) return INT_MAX;
//     if(i==matrix.size()-1 ) return matrix[i][j];
//      if(dp[i][j]!=-1000) return dp[i][j];
//      int down = f(i+1,j,matrix,dp);
// int left = f(i+1,j-1,matrix,dp);
// int right = f(i+1,j+1,matrix,dp);

// int best = min(down, min(left, right));

// if(best == INT_MAX) return INT_MAX;

//    return dp[i][j] = matrix[i][j] + best;
//    }
//     int minFallingPathSum(vector<vector<int>>& matrix) {
//         int ans =INT_MAX;

//       vector<vector<int>>dp(matrix.size(),vector<int>(matrix[0].size(),-1000));
//         for(int i=0;i<matrix[0].size();i++){
//             ans=min(ans,f(0,i,matrix,dp));
//         }
//         return ans ;
//     }
// };