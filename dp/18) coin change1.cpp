// class Solution {
// public:
//    int f(int idx , int amt , vector<int>&a , vector<vector<int>>&dp){
//        if(amt==0) return 0;

//        if(dp[idx][amt]!=-2) return dp[idx][amt];
//        if(idx ==0) {    
//         if((amt % a[0]) ==0 ) return amt/a[0];
//         else return -1;
//        }
       
//        int nt= f(idx-1,amt,a,dp);
//        int t =-1;
//        if(amt >=a[idx] ) t=f(idx,amt-a[idx],a,dp);

//        if(t==-1 && nt==-1)  return dp[idx][amt]=-1;
//        int ans =INT_MAX;
//        if (t!=-1) ans =min(ans,t+1);
//        if (nt!=-1) ans =min(ans,nt);
//        return dp[idx][amt] =ans;
      

//    }
//     int coinChange(vector<int>& coins, int amount) {
//         sort(coins.begin(), coins.end());
//         vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-2));
//         return f(coins.size()-1, amount , coins,dp);
//     }
// };