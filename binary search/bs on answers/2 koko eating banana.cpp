// class Solution {
// public:
//     bool check (vector<int>&nums,int k,int h){
//         long long temp=0;
//        for(int i=0;i<nums.size();i++){
//           temp+=(nums[i]+k-1)/k
//        }
//        return temp <=h ;
//     }
//     int minEatingSpeed(vector<int>& piles, int h) {
//         int x=INT_MIN;
//         for(int i=0;i<piles.size();i++){
//             x=max(x,piles[i]);
//         }
//        int ans=x;
//         int s=1;
//         int e=x;
//           while(s<=e){
//             int mid=s+(e-s)/2;
//             if(check(piles,mid,h)){
//                 ans=mid;
//                 e=mid-1;
//             }
//             else {
//                 s=mid+1;
//             }
//           }
//         return ans;
//     }
// };