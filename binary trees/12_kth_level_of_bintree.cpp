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

vector<int>ans;

void kth(Node*root,int level,int k){
    if(root==NULL){
        return ;
    }
    if(level==k){
       ans.push_back(root->data);
       return;
    }
    kth(root->left,level+1,k);
    kth(root->right,level+1,k);

}


int main(){
    vector<int>nums={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node*root=buildtree(nums);
    kth(root,1,3);
   
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
   
    return 0;
}