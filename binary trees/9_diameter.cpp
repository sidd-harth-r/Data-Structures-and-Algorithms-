// class Solution {
//  public:
//   pair<int,int> func(TreeNode*root){
//     if(root==NULL) return make_pair(0,0);  

//     // (diameter ,height)
//     pair<int,int>p1 =func(root->left);
//     pair<int,int>p2=func(root->right);
    
//    int curdia=p1.second+p2.second+1;
//    int finaldia=max(curdia,max(p1.first,p2.first));
//    int currheight=max(p1.second,p2.second)+1;
//     return make_pair(finaldia,currheight);
    

//   }
//     int diameterOfBinaryTree(TreeNode* root) {
//         pair<int,int>p=func(root);
//         return p.first-1;
//     }
// };




/////////////////// better solution 

// class Solution {
// public:
//   int dia=0;
//     int diameter(TreeNode* root){
//         if(root==NULL) return 0;

//         int l=diameter(root->left);
//         int r=diameter(root->right);
//         dia=max(dia,l+r+1);
//         return max(l,r)+1;
//     }
//     int diameterOfBinaryTree(TreeNode* root) {
//  if(root==NULL) return 0;
//         diameter(root);
//         return dia-1;
        
//     }
// };