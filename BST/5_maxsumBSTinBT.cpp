//  class Info{
//     public :
//     bool isBST;
//     int mini;
//     int maxi;
//     int sum;
//     Info(bool isBST,int mini,int maxi ,int sum){
//         this->isBST=isBST;
//         this->mini=mini;
//         this->maxi=maxi;
//         this->sum=sum;

//     }
//  };


//  int maxsum=0;

// class Solution {
// public:


//  Info* maxBST(TreeNode* root){
//     if(root==NULL){
//         return new Info(true,INT_MAX,INT_MIN,0);
//     }

//     Info* leftInfo=maxBST(root->left);
//     Info* rightInfo=maxBST(root->right);

//     int currmin=min(root->val,min(leftInfo->mini,rightInfo->mini));
//     int currmax=max(root->val,max(leftInfo->maxi,rightInfo->maxi));
//     int currsum=root->val+leftInfo->sum+rightInfo->sum;

//     if(leftInfo->isBST && rightInfo->isBST && root->val < rightInfo->mini && root->val > leftInfo->maxi) {
//         maxsum=max(maxsum,currsum);
//         return new Info(true,currmin,currmax,currsum);
//     }
//      return new Info(false,currmin,currmax,currsum);

//  }
//     int maxSumBST(TreeNode* root) {
//         maxsum=0;
//         maxBST(root);
//         return maxsum;
//     }
// };