// class Solution {
//   public:
//     Node* lca(Node*root,int a,int b){
//         if(root==NULL)  return NULL;
//         if(root->data ==a  || root->data==b) return root;
//         Node*l=lca(root->left ,a,b);
//         Node*r=lca(root->right ,a,b);
        
//         if(l!=NULL && r!=NULL) return root;
        
//         return l==NULL ? r:l;
//     }
    
//     int depth(Node*root,int a){
//         if(root==NULL)  return -1;
//         if(root->data==a) return 0;
//         int l=depth(root->left,a);
//         if(l!=-1){
//             return l+1;
//         }
//         int r=depth(root->right,a);
//         if(r!=-1){
//             return r+1;
//         }
        
       
//         else  return -1;
       
//     }
//     int findDist(Node* root, int a, int b) {
//         Node*target=lca(root,a,b);
//         int r1=depth(target,a);
//         int r2=depth(target,b);
        
//         return r1+r2;;
//     }
// };