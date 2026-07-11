// class Solution {
// public:
//     vector<int> getFloorAndCeil(vector<int> nums, int x) {
//   int ceil=-1;
//   int s=0;
//   int e=nums.size()-1;
//    while(s<=e){
//         int mid=s+(e-s)/2;
//         if(nums[mid]>=x){
//             ceil=nums[mid] ;
//             e=mid-1;
//         }
//         else {
//             s=mid+1;
//         }
//       }
//        s=0;
//       e=nums.size()-1;
//       int floor=-1;
      
//       while(s<=e){
//         int mid=s+(e-s)/2;
//         if(nums[mid]<=x){
//             floor=nums[mid] ;
//             s=mid+1;
//         }
//         else {
//             e=mid-1;
//         }
//       }
//       return {floor,ceil};
//     }
// };