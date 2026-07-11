// class Solution {
//   public:
  
      
//     int minDifference(vector<int>& arr) {
        
//         int sum=0;
//         for(int i=0;i<arr.size();i++) sum+=arr[i];
//         vector<vector<int>>dp(arr.size(),vector<int>(sum+1,-1));
        
//         for(int i=0;i<arr.size();i++){
//             dp[i][0]=1;
//         }
        
//         for(int i=1;i<=sum;i++){
//            if(arr[0]==i) dp[0][i]=1;
//            else dp[0][i]=0;
//         }
        
//         for(int i=1;i<arr.size();i++){
//             for(int j=1;j<=sum;j++){
//                 int pick= 0;
//                 if(j-arr[i] >=0){
//                 pick= dp[i-1][j-arr[i]];
//                 }
//                 int notpick=dp[i-1][j];
                
//                 dp[i][j]= pick || notpick;
//             }
//         }
        
//         int ans =INT_MAX;
//         for(int i=1;i<=sum;i++){
//             if(dp[arr.size()-1][i]==1){
//                 int x=abs(sum- 2*i);
//                 ans=min(ans,x);
//             }
//         }
//         return ans;
//     }
//  };


// class Solution {
//   public:
  
//       int f(int idx , int total ,int curr, vector<int>&a, vector<vector<int>>&dp){
//           if(idx < 0) return abs(total- 2*curr);
//           if(dp[idx][curr]!=-1) return dp[idx][curr];
          
//           int pick = f(idx-1,total, curr+a[idx],a,dp );
//           int notpick = f(idx-1, total, curr, a,dp);
          
//           return dp[idx][curr]= min(pick,notpick);
//       } 
      
//     int minDifference(vector<int>& arr) {
        
//         int sum=0;
//         for(int i=0;i<arr.size();i++) sum+=arr[i];
//         vector<vector<int>>dp(arr.size(),vector<int>(sum+1,-1));
        
//         return f(arr.size()-1, sum,0,arr,dp);
        
//     }
// };
