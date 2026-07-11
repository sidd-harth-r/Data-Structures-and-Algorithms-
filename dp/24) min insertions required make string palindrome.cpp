// class Solution {
// public:
//     int f (int i , int j , string& s , vector<vector<int>>& dp){
//         if(i >= j ) return 0;
//         if (dp[i][j]!=-1) return dp[i][j];
//         if(s[i] == s[j]) return dp[i][j]=f(i+1, j-1,s,dp);
//         return dp[i][j]= min (f(i+1,j,s, dp), f(i, j-1,s,dp)) +1; 
//     }
//     int minInsertions(string s) {
//         vector<vector<int>>dp(s.size(), vector<int>(s.size(),-1));
//         return f(0,s.size()-1, s, dp);
//     }
// };

///////////////////////// approach 2

// For a string of length n:

// Minimum Deletions = n −  LPS
// Minimum Insertions = n − LPS

// where LPS = Longest Palindromic Subsequence.

// LPS = LCS(s, reverse(s))