// class Solution {
//   public:

//    int sumtree(Node*node){
//        if(node==NULL) return 0;
//        int l=sumtree(node->left);
//        int r=sumtree(node->right);
//        int temp=node->data;
//        node->data=l+r;
//        return l+r+temp;
       
//    }
//     void toSumTree(Node *node) {
        
//         sumtree(node);
//     }
// };