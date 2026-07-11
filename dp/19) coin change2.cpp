// class Solution {
// public:
//      int f(int i , int amt , vector<int>& a, vector<vector<int>>&dp){
//         if(i==0){
//             if( amt % a[0] == 0) return 1;
//             return 0;
//         }
//         if(dp[i][amt]!=-1) return dp[i][amt];
//        int nt = f(i-1,amt,a,dp);
//        int t = 0;
//        if(amt -a[i] >=0){
//         t=f(i,amt-a[i],a,dp);
//        } 
//          return dp[i][amt]= t+nt;
//      }

//     int change(int amount, vector<int>& coins) {
//         vector<vector<int>>dp(coins.size(), vector<int>(amount+1,-1));
//         return f(coins.size()-1,amount,coins,dp);
//     }
// };