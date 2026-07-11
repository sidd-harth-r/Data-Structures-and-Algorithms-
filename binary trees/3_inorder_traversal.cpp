#include<iostream>
#include<vector>

using namespace std ;

class Node{

    public:

    int data ;
    Node*left;
    Node*right;

    Node(int value){
        data =value;
        left=NULL;
        right=NULL;
    }

};

static int idx=-1;


Node* buildtree(vector<int>nums){
   idx++;
   if(nums[idx]==-1){
    return NULL;
   }

   Node *currNode=new Node(nums[idx]);
   currNode->left=buildtree(nums);
   currNode->right=buildtree(nums);

   return currNode;

}

void inorder(Node*root){
    if(root==NULL){
        return ;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}



int main(){
    vector<int>nums={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node*root=buildtree(nums);
inorder(root);
return 0;
}