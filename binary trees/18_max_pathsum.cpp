// class Solution {
// public:
//  int sum=INT_MIN;
//   int path(TreeNode* root ){
//     if(root==NULL) return 0;
//     int l=max(0,path(root->left)); //  not considering left or right height if it comes out to be negative
//     int r=max(0,path(root->right)); 
   
//     sum=max(sum,l+r+root->val); // camparing diameter sum of each node 
//     return max(l,r)+root->val;
//   }
//     int maxPathSum(TreeNode* root) {
//         path(root);
//         return sum;
        
//     }
// };