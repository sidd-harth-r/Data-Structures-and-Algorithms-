// approach 1 

// string t = s;
// reverse(t.begin(), t.end());

// return LCS(s, t);


// approach 2 

// class Solution {
// public:
//     // dp[i][j] = longest palindromic subsequence in the interval [i,i+1,i+2........ j-1,j]
//    int f (int i, int j , string & s , vector<vector<int>>&dp){
//     if(i==j) return 1;
//     if(i > j) return 0;
//     if(dp[i][j]!=-1) return dp[i][j];
//     if(s[i]==s[j]) return dp[i][j] = 2 + f(i+1, j-1,s,dp);
//      return dp[i][j]= max(f(i+1,j,s,dp),f(i, j-1,s,dp));
//    }
//     int longestPalindromeSubseq(string s) {
//         vector<vector<int>>dp(s.size(),vector<int>(s.size(),-1));
//         return f(0, s.size()-1,s,dp);
//     }
// };