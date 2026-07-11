// class Solution {
// public:
//     int findBottomLeftValue(TreeNode* root) {
//        int result=root->val;
       
//         queue<pair<TreeNode*,int>>q;
//         q.push(make_pair(root,0));
//         q.push(make_pair((TreeNode*)NULL,0));
      
//         while(!q.empty()){
//             pair<TreeNode*,int>p=q.front();
//             q.pop();
//             if(p.first==(TreeNode*)NULL){
//                 if(q.empty()){
//                     return result;
//                 }
//                  q.push(make_pair((TreeNode*)NULL,0));
//                  int value=q.front().first->val;
//                  result=value;
//                  continue;
//             }
         
      
//         if(p.first->left !=NULL ) q.push(make_pair(p.first->left,p.second-1));
//         if(p.first->right !=NULL ) q.push(make_pair(p.first->right,p.second+1));
        

//         }

//         return result;
        
//     }
// };





//////////////////                           DFS APPROACH                         ///////////////////////////////////

// class Solution {
// public:
//  int level=0;
//  int result=0;
//   void leftvalue(TreeNode* root,int cur){
//     if(root==NULL) return ;
//     if(cur>level){
//         level++;
//         result=root->val;
    
//     }
//     leftvalue(root->left,cur+1);
//     leftvalue(root->right,cur+1);

//   }
//     int findBottomLeftValue(TreeNode* root) {
//         leftvalue(root,1);
//         return result;
//     }
// };