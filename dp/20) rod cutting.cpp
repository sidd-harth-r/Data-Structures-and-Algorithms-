// class Solution {
//   public:
 
//     int cutRod(vector<int> &price) {
//         vector<int>prev(price.size()+1,0),curr(price.size()+1,0);
//         for(int i=1;i<=price.size();i++){
//             prev[i]= i*price[0];
//         }
        
//         for(int i=1;i<price.size();i++){
//             for (int j=1;j<=price.size();j++){
//                 int nt = prev[j];
//                 int t=INT_MIN;
//                 if(j- i-1 >=0){
//                     t= curr[j-i-1] + price[i];
//                 }
//                 curr[j] = max (t, nt);
//             }
//             prev =curr;
//         }
        
//         return prev[price.size()];
//     }
// };