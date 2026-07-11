// class Solution {
// public:
//    bool check(vector<int>&nums,int j,int m,int k){
//        int curr=0;
//        for(int i=0;i<nums.size();i++){
//         if(nums[i]<=j) {
//             curr++;
//             if(curr==k){
//                 m--;
//                 curr=0;
//             }
//         }
//         else {
//             curr=0;
//         }
//        }
//        return m<=0;
//    }
//     int minDays(vector<int>& bloomDay, int m, int k) {
      
//         int x=INT_MIN;
//         for(int i=0;i<bloomDay.size();i++){
//             x=max(x,bloomDay[i]);
//         }
//         int ans=-1;
//         int s=1;
//         int e=x;
//         while(s<=e){
//             int mid=s+(e-s)/2;
//             if(check(bloomDay,mid,m,k)){
//                 ans=mid;
//                 e=mid-1;
//             }
//             else s=mid+1;
//         }
//         return ans;
//     }
// };