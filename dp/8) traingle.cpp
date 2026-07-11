// class Solution {
// public:

//     int minimumTotal(vector<vector<int>>& tri) {
//         vector<vector<int>>dp(tri.size(),vector<int>(tri[tri.size()-1].size()));
//         for(int i=0;i<tri[tri.size()-1].size();i++){
//             dp[tri.size()-1][i]=tri[tri.size()-1][i];
//         }
//         for(int i= tri.size()-2;i>=0 ;i--){
//             for(int j=i;j>=0;j--){
//                 dp[i][j]=tri[i][j]+min(dp[i+1][j],dp[i+1][j+1]);
//             }
//         }
//         return dp[0][0];
//     }
// };