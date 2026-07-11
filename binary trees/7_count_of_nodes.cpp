#include<iostream>
#include<vector>
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

int count(Node*root){
    if(root==NULL){
        return 0;
    }

    int leftNode=count(root->left);
    int rightNode=count(root->right);

    return leftNode+rightNode+1;
}


int main(){
    vector<int>nums={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node*root=buildtree(nums);

    cout<<"Root is : "<<root->data<<endl;
    cout<<"No of nodes : "<<count(root)<<endl;
    return 0;
}