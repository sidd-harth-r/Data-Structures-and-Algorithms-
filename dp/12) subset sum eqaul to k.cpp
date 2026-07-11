// class Solution {
//   public:
  
//      bool f(int idx , int target, vector<vector<int>>&dp, vector<int>&a){
//          if(target == 0) return true;
//          if(idx < 0) return false ;
//          if(dp[idx][target]!=-1) {
//              return dp[idx][target];
//          }
//          bool nottake = f(idx-1,target,dp,a);
//          bool take=false;
//          if (target > = a[idx]){
//              take = f(idx-1,target-a[idx],dp,a);
//          }
         
//          return dp[idx][target]= take || nottake;
//      }
//     bool isSubsetSum(vector<int>& arr, int sum) {
       
//       vector<vector<int>>dp(arr.size(),vector<int>(sum+1),-1);
//       return f(a.size()-1,sum,dp,arr);
        
//     }
// };




// class Solution {
//   public:
  
//     bool isSubsetSum(vector<int>& arr, int sum) {
       
//       vector<vector<int>>dp(arr.size(),vector<int>(sum+1,0));
      
//       for(int i=0;i<arr.size();i++){
//           dp[i][0]=1;
//       }
      
//       for(int i=1;i<=sum;i++){
//           if(arr[0]==i){
//               dp[0][i]=1;
//           }
//           else {
//               dp[0][i]=0;
//           }
//       }
      
//       for(int i=1;i<arr.size();i++){
//           for(int j=0;j<=sum;j++){
//               bool nottake=dp[i-1][j];
//               bool take = false ;
//               if(j-arr[i] >=0){
//                 take = dp[i-1][j-arr[i]];
//               }
//               dp[i][j]=take || nottake;
             
//           }
//       }
//       return dp[arr.size()-1][sum];
//     }
// };