// class Solution {
// public:
//    int ans =0;

//    void range(TreeNode*root,int low ,int high){
//     if(root==NULL) return;
//     if(root->val < low ){
//         range(root->right,low,high );
//     }
//     else if(root->val > high){
//         range (root->left,low,high);
//     }
//     else {
//         ans+=root->val;
//         range(root->left,low,high);
//         range(root->right,low,high);
//     }
//    }
//     int rangeSumBST(TreeNode* root, int low, int high) {
//        range(root,low,high);
//        return ans ;
//     }
// };