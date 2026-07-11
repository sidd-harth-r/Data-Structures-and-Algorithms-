// class Solution {
// public:

//    int f (vector<int>&nums,int l,int r){
//      int prev2=0;
//      int prev=nums[l];
//      for(int i=l+1;i<=r;i++){
//        int pick = nums[i]+prev2;
//        int notpick=prev;

//        int curr=max(pick,notpick);
//        prev2=prev;
//        prev=curr;
//      }
//      return prev;
//    }
//     int rob(vector<int>& nums) {
//         if(nums.size()==1) return nums[0];
//         return max(f(nums,0,nums.size()-2),f(nums,1,nums.size()-1));
//     }
// };