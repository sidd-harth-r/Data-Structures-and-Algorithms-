// class Solution {
// public:
//     TreeNode* buildBST(vector<int>&nums,int si,int ei){
//         if(si>ei){
//        return NULL ;
//         }
//         int mid= si+(ei-si)/2;
//        TreeNode * newNode =new TreeNode(nums[mid]);
        

//         newNode->left=buildBST(nums,si,mid-1);
//         newNode->right=buildBST(nums,mid+1,ei);
       
//         return newNode ;
//     }
//     TreeNode* sortedArrayToBST(vector<int>& nums) {
//         return buildBST(nums,0,nums.size()-1);
        
        
//     }
// };