// class Solution {
// public:
//        int lcs(string &text1, string &text2 , vector<vector<int>>& dp) {

//         int n = text1.size ();
//         int m = text2.size();

//          for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
               
//                 if( text1[i]==text2[j]) {
//                      if(i-1 >=0 && j-1 >=0) dp[i][j]= 1+ dp[i-1][j-1];
//                      else dp[i][j] = 1;

//                 }
//                 else {
//                     int s1=0;
//                     int s2=0;
//                     if(i-1 >=0 ) s1=dp[i-1][j];
//                     if(j-1 >=0)  s2=dp[i][j-1];

//                     dp[i][j] =max(s1,s2);
//                 }
                
//             }
//          }
//          return dp[n-1][m-1];
//     }
     
//     string shortestCommonSupersequence(string str1, string str2) {
//         vector<vector<int>>dp(str1.size(), vector<int>(str2.size(),-1));
         
//          int x = lcs(str1,str2,dp);

//          string s="";
//          int i = str1.size()-1;
//          int j= str2.size()-1;
//          while ( i>=0 && j>=0){
//             if(str1[i] == str2[j]){
//                 s= str1[i] + s;
//                 i=i-1;
//                 j=j-1;
//             }
//             else {
//                 if(i ==0) {
//                    j=j-1;
//                     continue;

//                 }
//                 if (j== 0){
                   
//                      i=i-1 ;
//                     continue;
//                 }

//                 if (dp[i-1][j] > dp[i][j-1]){
//                     i=i-1;
//                 }
//                 else {
                    
//                     j= j-1;
//                 }
//             }
//          }
      
    
      
       
//          i=0;
//          j=0;
//         int k=0;
//         string ans ="";
//        while ( i<s.size()){
//          char c =s[i];
//          while(j<str1.size() ){
//             if(str1[j]!=c)
//             ans = ans +str1[j++] ;
//             else {
//                 j++;
//                 break;
//             }
//          }
//          while(k<str2.size() ){
//             if (str2[k]!=c)
//             ans = ans +str2[k++];
//             else {
//                 k++;
//                 break ;
//             }
//          }
//          ans = ans +c;
//          i++;
//        }
//         while(j<str1.size() ){
//             ans = ans +str1[j++];
//          }

//            while(k<str2.size() ){
//             ans = ans +str2[k++];
//          }

//           return ans ;
//     }
// };