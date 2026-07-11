// class Solution {
//   public:
    
//     bool canAllocate(vector<int>&nums,int m,int k){
        
//         int temp=1;
//         int curr=0;
//         for(int i=0;i<nums.size();i++){
//             if(curr+nums[i]<=m){
//                 curr+=nums[i];
//             }
//             else{
//                 curr=nums[i];
//                 temp++;
//             }
//         }
//         return temp<=k;
//     }
//     int findPages(vector<int> &arr, int k) {
//           if(k > arr.size()) return -1;
//      int s=INT_MIN;
//      int e=0;
//      for(int i=0;i<arr.size();i++){
//          s=max(s,arr[i]);
//          e+=arr[i];
//      }
//           int ans=-1;
//       while(s<=e){
//           int mid=s+(e-s)/2;
//           if(canAllocate(arr,mid,k)){
//               ans=mid;
//               e=mid-1;
//           }
//           else {
//               s=mid+1;
//           }
//       }
//       return ans;
        
//     }
// };