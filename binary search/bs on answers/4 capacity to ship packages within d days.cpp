// class Solution {
// public:

//     bool check(vector<int>&nums,int k,int days ){
//         long long temp=0;
//         int d=1;
//         for (int i=0;i<nums.size();i++){
//             long long y=temp+nums[i];
//             if(y>k){
//                 d++;
//                 temp=0;
              
//             }
//            temp+=nums[i];
//         }
//         return d<=days;
//     }
//     int shipWithinDays(vector<int>& weights, int days) {
//         int x=0;
//         int s=INT_MIN;
//         for(int i=0;i<weights.size();i++){
//             x+=weights[i];
//             s=max(s,weights[i]);
//         }
  
//         int e=x;
//         int ans=x;
//         while(s<=e){
//             int mid=s+(e-s)/2;
//             if(check(weights,mid,days)){
//                 ans=mid;
//                 e=mid-1;
//             }
//             else {
//                 s=mid+1;
//             }
//         }
//         return ans;
//     }
// };