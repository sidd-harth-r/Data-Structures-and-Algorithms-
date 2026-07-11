// class Solution {
// public:
//    bool path(TreeNode *root,TreeNode * target,vector<TreeNode*>&arr){
//     if(root==NULL)  return false ;
//     if(root == target) {
//         arr.push_back(root);
//         return true;
//     }
  
//      arr.push_back(root);
//      bool l =path(root->left,target,arr);
//      if(l) return true;
   

//      bool r= path(root->right,target,arr);
//      if(r) return true;
//      arr.pop_back();
//      return false;


     
//      }










// Approach 2 


// class Solution {
// public:
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//        if(root ==NULL)  return NULL;

//        if(root==p || root==q)  return root;

//        TreeNode* l=lowestCommonAncestor(root->left,p,q);
//        TreeNode* r=lowestCommonAncestor(root->right,p,q);




//                          //    if(l==NULL && r== NULL)  return NULL;
//                          //    else if(l!=NULL && r== NULL)  return l;
//                          //    else if(l==NULL && r!= NULL)  return r;
//                          //    else return root;
                     
//      if(l!=NULL && r!= NULL)  return root;
//      return l==NULL ? r : l; // covers all three cases 
//     }
// };
  
    
   
    
    
   


  
        
//     TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//    vector<TreeNode*>p1;
//    vector<TreeNode*>p2;

//    path(root,p,p1);
//    path(root,q,p2);


//  int i=0;

 
//  TreeNode* common=NULL;

//  while(i!=p1.size() && i!=p2.size() && p1[i]==p2[i]){
//    common=p1[i];
//    i++;
   
//  }
//   return common;

//     }
// };