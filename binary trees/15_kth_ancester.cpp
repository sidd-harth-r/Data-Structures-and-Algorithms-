// class Solution {
//   public:
//      int kth(Node*root,int k,int node,int &ans){
//          if(root==NULL) return -1;
//          if(root->data== node) return 1;
         
//          int l=kth(root->left,k,node,ans);
//          int r=kth(root->right,k,node,ans);
//          if(l==-1 && r==-1) return -1;
//          int value= l==-1 ? r : l;
//          if(value==k) ans =root->data;
//          return value+1;
//      }
//     int kthAncestor(Node *root, int k, int node) {
//         int ans=-1;
//         kth(root,k,node,ans);
//         return ans;
        
//     }
// };