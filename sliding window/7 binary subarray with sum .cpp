// class Solution {
// int f(vector<int>&nums,int goal){
//  if(goal<0) return 0;
//      int l=0;
//      int r=0;
//      long long sum=0;
//      int count =0;
//      while(r<nums.size()){
//       sum+=nums[r];
      
      
//         while(sum>goal){
//         sum=sum-nums[l];
//         l++;
//         }
//     count+=r-l+1;
//       r++;
//      }
     
//      return count;
// }
// public:
//     int numSubarraysWithSum(vector<int>& nums, int goal) {
//      return f(nums,goal)-f(nums,goal-1);

//     }
// };