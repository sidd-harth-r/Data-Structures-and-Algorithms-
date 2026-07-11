// class Solution {
// public:
//     vector<int> rightSideView(TreeNode* root) {
//         if(root==NULL) return {};
//         vector<int>ans;
//         queue<TreeNode*>q;
//         q.push(root);
//         q.push(NULL);
        
//        int node;

//         while(!q.empty()){
//            TreeNode*curr=q.front();
//             q.pop();
//             if(curr==NULL){
//                 ans.push_back(node);
//                 if(q.empty()) return ans;
               
//                  q.push(NULL);
//                 continue;
//             }
//            node=curr->val;

            
           
//             if(curr->left!=NULL) q.push(curr->left);
//             if(curr->right!=NULL) q.push(curr->right);
//         }
//         return ans ;
//     }
// };




////////////////////////  optimal solution 

// class Solution {
// public:
//   vector<int>ans;
//   void rightview(TreeNode* root,int depth){
//     if(root==NULL) return ;
//     if(ans.size()==depth) ans.push_back(root->val);
//     rightview(root->right,depth+1);
//     rightview(root->left,depth+1);

//   }
//     vector<int> rightSideView(TreeNode* root) {
//         rightview(root,0);
//         return ans ;
        
//     }
// };