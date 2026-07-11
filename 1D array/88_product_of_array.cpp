// Product of Array Except Self

// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
      
     
    
//       vector<int>ans(nums.size(),0);
   
      
//       int prefix=1;

//       ans[nums.size()-1]=1;

       
//         for(int i=nums.size()-2;i>=0;i--){
//             ans[i]=ans[i+1]*nums[i+1];
//         }

//         for(int i=0;i<nums.size();i++){
//             ans[i]=prefix*ans[i];
//             prefix*=nums[i];
//         }
//        return ans ; 
//     }
// };