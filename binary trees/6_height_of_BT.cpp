#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

class Node{

    public : 

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

    Node*currNode=new Node(nums[idx]);
    currNode->left=buildtree(nums);
    currNode->right=buildtree(nums);

    return currNode;
}




int height(Node*root){
    if(root==NULL){
       
        return 0;

    }
        
    int leftHeight=height(root->left);
    int rightHeight=height(root->right);

    int currHt=(max(leftHeight,rightHeight)+1);

    return currHt;

}


int main(){
    vector<int>nums={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node*root=buildtree(nums);

    cout<<"Root is : "<<root->data<<endl;
    cout<<"height is :"<<height(root);
    return 0;
}