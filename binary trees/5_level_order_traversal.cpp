#include<iostream>
#include<vector>
#include<queue>



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

void levelorder(Node*root){
    if(root==NULL){
        return ;
    }

    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    

    while(!q.empty()){
        Node* curr =q.front();
        q.pop();
        if(curr==NULL){
            if(q.empty()) break;
            cout<<"\n";
            q.push(NULL);
            continue;
        }
        cout<<curr->data<<" ";


        if(curr->left!=NULL)
        q.push(curr->left);
        if(curr->right!=NULL)
        q.push(curr->right);

    }
}






int main(){
    vector<int>nums={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node*root=buildtree(nums);
levelorder(root);
return 0;
}