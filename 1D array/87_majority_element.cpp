// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int majority=nums[0];
//         int lead=1;

//         for(int i=1;i<nums.size();i++){
//           if(nums[i]==majority){
//             lead++;
//           }

//           else {
//             lead--;
//             if (lead<0){
//                 lead=1;
//                 majority=nums[i];
//             }
//           }

//         }
//         return majority;
//     }
// };