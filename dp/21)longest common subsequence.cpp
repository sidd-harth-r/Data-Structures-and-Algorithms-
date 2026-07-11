// class Solution {
// public:

//      int f(int idx1 , int idx2 , string &s1 , string &s2 , vector<vector<int>>&dp){
//         if(idx1 < 0 || idx2 < 0 ){
//             return 0;
//         }
//         if (dp[idx1][idx2]!=-1) return dp[idx1][idx2];

//         if(s1[idx1]==s2[idx2]) return dp[idx1][idx2] = 1+ f(idx1-1,idx2-1,s1,s2,dp);

//         return dp[idx1][idx2]= 0+max(f(idx1,idx2-1,s1,s2,dp),f(idx1-1,idx2,s1,s2,dp));
//      }
//     int longestCommonSubsequence(string text1, string text2) {
//         vector<vector<int>>dp(text1.size()+1,vector<int>(text2.size()+1,-1));
//         return f(text1.size()-1,text2.size()-1,text1,text2,dp);
//     }
// };


// class Solution {
// public:


    //  int longestCommonSubsequence(string text1, string text2) {
    //     vector<vector<int>>dp(text1.size(),vector<int>(text2.size(),0));
    //     int n = text1.size ();
    //     int m = text2.size();

    //      for(int i=0;i<n;i++){
    //         for(int j=0;j<m;j++){
               
    //             if( text1[i]==text2[j]) {
    //                  if(i-1 >=0 && j-1 >=0) dp[i][j]= 1+ dp[i-1][j-1];
    //                  else dp[i][j] = 1;

    //             }
    //             else {
    //                 int s1=0;
    //                 int s2=0;
    //                 if(i-1 >=0 ) s1=dp[i-1][j];
    //                 if(j-1 >=0)  s2=dp[i][j-1];

    //                 dp[i][j] =max(s1,s2);
    //             }
                
    //         }
    //      }
    //      return dp[n-1][m-1];
    // }
// };