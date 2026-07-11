// implementing a BST with insert , search and delete operation



#include<iostream>
using namespace std ;

class Node{
    public: 
    int data ;
    Node*left;
    Node* right;
    Node(int value){
        data=value;
        left=NULL;
        right=NULL;
    }
};

 Node*insert(Node*root,int value){
    if(root==NULL)  {
        Node*newNode=new Node(value);
        return newNode;

    }

    if(root->data < value){
        root->right=insert(root->right,value);
    }
    else{

        root->left=insert(root->left,value);
    }
    return root ;
 }


Node* buildBST(int arr[],int n){
    Node*root=NULL;
    for(int i=0;i<n;i++){
       root= insert(root,arr[i]); 
    }
    return root;
}

bool search(Node* root ,int value){
    if(root==NULL) return false ;

    if(root->data == value) return true ;
    else if(root->data > value) return search(root->left ,value);
    else return search(root->right,value);
}

Node* inorederSuccesor(Node* root ){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}



Node* deleteNode(Node*root,int value){
     if(root==NULL) return NULL;
     if(root->data < value){
        root->right=deleteNode(root->right,value);
     }

     else if(root->data > value){
        root->left=deleteNode(root->left,value);
     }

     else {
        if(root->left ==NULL && root->right==NULL){
            delete(root);
            return NULL;
        }

        else if(root->left==NULL || root->right==NULL){
       
            return root->left==NULL ? root->right : root ->left;
        }
        else {
           Node* IS = inorederSuccesor(root->right);
           root->data=IS->data;
          root->right= deleteNode(root->right,IS->data);
           return root;
        }
     }
     return root;
}



void inorder(Node*root){
    if(root==NULL) return ;

    inorder(root->left);
   cout<<root->data<<" ";
    inorder(root->right);
}



int main(){
    int arr[]={8,5,3,1,4,6,10,11,14};
    int n=sizeof(arr)/sizeof(int);
    Node*root=buildBST(arr,n);
//  cout<<search(root,8)<<"\n";
    inorder(root);
    cout<<"\n";

    root=deleteNode(root,5);
    inorder(root);
    return 0;

}


