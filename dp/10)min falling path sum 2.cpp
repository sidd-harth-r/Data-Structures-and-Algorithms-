class Solution {
public:


    int minFallingPathSum(vector<vector<int>>& grid) {
       vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size(),-1));
       int ans =INT_MAX;
       for(int i=0;i<grid[0].size();i++){
        dp[0][i]=grid[0][i];
       }
       for(int i=1;i<grid.size();i++){
        for(int j=0;j<grid[0].size();j++){
            int mini=INT_MAX;
           for(int k=0;k<grid[0].size();k++){
            if(k!=j){
              mini=min(mini,dp[i-1][k]);
            }
            
           }
           dp[i][j]=grid[i][j]+mini;
        }
       } 

       for(int i=0;i<grid[0].size();i++) ans=min(ans,dp[grid.size()-1][i]);
       return ans;
    }
};