// class Solution {
// public:
//    int f(int i,int j1, int j2 , vector<vector<int>>&grid, vector<vector<vector<int>>>&dp){
//     if (j1 <0 || j1>grid[0].size()-1 || j2<0 || j2>grid[0].size()-1) return -1e7;
//     if(i==grid.size()-1) {
//         if(j1==j2) return grid[i][j1];
//         else return grid[i][j1]+ grid[i][j2];
//     }
//     if(dp[i][j1][j2]!=-1) return dp[i][j1][j2];
//        int maxi=INT_MIN;
//     for(int del1=-1 ;del1<=1 ;del1++){
//         for(int del2=-1 ; del2 <=1;del2++){
//             if(j1==j2 ) maxi=max(maxi,grid[i][j1]+f(i+1,j1+del1,j2+del2,grid,dp));
//             else maxi=max(maxi,grid[i][j1]+grid[i][j2]+f(i+1,j1+del1,j2+del2,grid,dp));
//         }
//     }
//     return dp[i][j1][j2]=maxi;
//    }
//     int cherryPickup(vector<vector<int>>& grid) {
//         int m=grid.size();
//         int n=grid[0].size();
//         vector<vector<vector<int>>>dp(m,vector<vector<int>>(n,vector<int>(n,-1)));
//         return f(0,0,n-1,grid,dp);
//     }
// };