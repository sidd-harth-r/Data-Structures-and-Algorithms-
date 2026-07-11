// class Solution {
// public:
//       bool check (vector<int>&nums,int mid,int k){
//         int d=1;
//         int curr=0;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]+curr <=mid){
//                 curr+=nums[i];
//             }
//             else {
//                 d++;
//                 curr=nums[i];
//             }
//         }
//         return d<=k;
//       }
//     int splitArray(vector<int>& nums, int k) {
//         int e=0;
//         int s=INT_MIN;
//         for(int i=0;i<nums.size();i++){
//             e+=nums[i];
//             s=max(s,nums[i]);
//         }
//         int ans =0;
//         while(s<=e){
//             int mid=s+(e-s)/2;
//             if(check(nums,mid,k)){
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