// class Solution {
// public:

//    int f(int i ,int j,int m,int n, vector<vector<int>>&dp){
//       if(i==m-1 && j==n-1) return 1;
//       if(i >= m  || j >= n) return 0;
//       if (dp[i][j] !=-1) return dp[i][j];
//        int count=0;
//         count+=f(i+1, j ,m,n,dp);
//         count +=f(i,j+1,m,n,dp);
//        return dp[i][j]=count ;
//    }
//     int uniquePaths(int m, int n) {
//         vector<vector<int>>dp(m,vector<int>(n,-1));
//         return f(0,0,m,n,dp);
//     }
// };






// class Solution {
// public:
//     int uniquePaths(int m, int n) {
//          vector<vector<int>>dp(m,vector<int>(n,-1));
//          dp[0][0]=1;
//          for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(i==0 && j==0) dp[0][0]=1;
//                 else {
//                    int up=0;
//                 int left=0;
//                 if(i>0) up=dp[i-1][j];
//                 if(j>0) left=dp[i][j-1];
//                 dp[i][j]=left+up;  
//                 }
               
//             }
//          }
//          return dp[m-1][n-1];
//     }
// };


// class Solution {
// public:
//     int uniquePaths(int m, int n) {
//          vector<int>dp(n,0);
        
//          for(int i=0;i<m;i++){
//             vector<int>temp(n,0);
//             for(int j=0;j<n;j++){
//                 if(i==0 && j==0) temp[j]=1;
//                 else {
//                  temp[j]=dp[j];
//              if(j>0)   temp[j]=dp[j]+temp[j-1];
               
//                 }
               
//             }
//             dp=temp;
//          }
//          return dp[n-1];
//     }
// };