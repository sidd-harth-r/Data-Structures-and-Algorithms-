
// Tabulation 
// class Solution {
//   public:
  
//     int minCost(vector<int>& heights) {
//         if(heights.size()==1)   return 0;
//         if(heights.size()==2)   return abs(heights[0]-heights[1]);
        
//         vector<int>dp(heights.size(),-1);
        
    
//         dp[1]= abs(heights[0]-heights[1]);
//         dp[0]= 0;
//         for(int i=2;i< heights.size();i++){
//            if((dp[i-1] + abs (heights[i]-heights[i-1])  )  < (dp[i-2] + abs (heights[i]-heights[i-2])  )){
//                dp[i]= dp[i-1] + abs (heights[i]-heights[i-1]);
               
//            }
//            else {
//                 dp[i]= dp[i-2] + abs (heights[i]-heights[i-2]);
               
//            }
//         }
        
//         return dp[heights.size()-1];
//     }
// };


// memoization

// class Solution {
//   public:
  
//      int f(int n , vector<int>&dp , vector<int>&height){
//          if(n==0) return 0;
         
//          if(dp[n]!=-1 ) return dp[n];
         
//          int left=f(n-1,dp,height)+ abs (height[n-1] - height[n]);
//          int right =INT_MAX;
//          if(n>1){
//              right=f(n-2,dp,height)+ abs (height[n-2] - height[n]);
//          }
         
//          return dp[n]=min(right ,left);
//      }
//     int minCost(vector<int>& height) {
//       vector<int> dp(height.size(),-1);
//       return  f(height.size()-1,dp,height);
//     }
// };



// tabulation with optimization 

// class Solution {
//   public:
    
  
//     int minCost(vector<int>& heights) {
//         if(heights.size()==1)   return 0;
//         if(heights.size()==2)   return abs(heights[0]-heights[1]);
        
//         vector<int>dp(heights.size(),INT_MAX);
        
//           int curr;
//         int prev= abs(heights[0]-heights[1]);
//         int prev2= 0;
//         for(int i=2;i< heights.size();i++){
//            if((prev + abs (heights[i]-heights[i-1])  )  < (prev2 + abs (heights[i]-heights[i-2])  )){
//                 curr= prev + abs (heights[i]-heights[i-1]);
              
//            }
//            else {
//                 curr= prev2 + abs (heights[i]-heights[i-2]);
                
//            }
//              prev2=prev;
//                prev=curr;
//         }
        
//         return curr;
//     }
// };