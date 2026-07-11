// class Solution {
// public:
//  void inorder(TreeNode * root,vector<int>&ans){
//     if(root==NULL) return ;
//     inorder(root->left,ans);
//     ans.push_back(root->val);
//     inorder(root->right,ans);

//  }
//     bool isValidBST(TreeNode* root) {
//         vector<int>ans;
//         inorder(root,ans);
//         for(int i=0;i<ans.size()-1;i++){
//             if(ans[i]>=ans[i+1]) return false ;
//         }
//         return true ;
//     }
// };




//////// optimal solution ///////////////////////////////////
// class Solution {
// public:
//   bool result (TreeNode* root ,TreeNode* mini,TreeNode* maxi){
//     if(root==NULL) return true ;
//     if(mini!=NULL && root->val <=mini->val) return false ;
//     if(maxi!=NULL && root->val >=maxi->val) return false ;


//     bool l=result(root->left ,mini,root);
//     bool r=result(root->right,root,maxi);

//     return l && r;


//   }
//     bool isValidBST(TreeNode* root) {
//      return result(root,NULL,NULL);


//     }
// };