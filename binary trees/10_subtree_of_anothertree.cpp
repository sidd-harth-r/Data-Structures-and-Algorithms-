// class Solution {
// public:

//    bool isIdentical(TreeNode* root ,TreeNode* subRoot){
//     if(root == NULL && subRoot ==NULL) return true;
//       else if (root ==NULL && subRoot!=NULL) return false;
//         else if(root!=NULL && subRoot==NULL)  return false;
//         if(root->val !=subRoot->val) return false;
      
//       return (isIdentical(root->left,subRoot->left)) && (isIdentical(root->right,subRoot->right));

//    }
//     bool isSubtree(TreeNode* root, TreeNode* subRoot) {
//         if(root==NULL && subRoot==NULL)  return true;
            
//         else if (root ==NULL && subRoot!=NULL) return false;
//         else if(root!=NULL && subRoot==NULL)  return false;

//         if(root->val == subRoot->val) {
//        bool val =isIdentical(root,subRoot);
//        if(val) return true;
                
//         }
          

//         bool l=isSubtree(root->left,subRoot);
//         if(l) return true;
//         bool r=isSubtree(root->right,subRoot);
//         return (r);

        
//     }
// };