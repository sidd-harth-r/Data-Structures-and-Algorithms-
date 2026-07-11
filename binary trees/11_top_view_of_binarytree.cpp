#include<iostream>
#include<map>
#include<vector>
#include<queue>

using namespace std;

class Node{
    public : 
    int data;
        Node*left;
        Node*right;

        Node(int value){
           data =value;
           left=NULL;
           right=NULL;
        }
};

static int idx=-1;

Node * buildtree(vector<int>&nums){
    idx++;
    if(nums[idx]==-1) return NULL;

  Node*currNode=new Node(nums[idx]);

  currNode->left=buildtree(nums);
  currNode->right=buildtree(nums);
  return currNode;

}

vector<int> topview(Node*root,vector<int>&ans){
    if(root ==NULL) return ans;
    queue<pair<Node*,int>>q;
    q.push(make_pair(root,0));
    map<int,int>m;  // (H.D,VALUE)
    
    while(!q.empty()){
       pair<Node*,int>curr=q.front();
        q.pop();
        if(!m.count(curr.second)){
            m[curr.second]=curr.first->data;
        }
        if(curr.first->left!=NULL) q.push(make_pair(curr.first->left,curr.second-1));
          if(curr.first->right!=NULL) q.push(make_pair(curr.first->right,curr.second+1));
    }
    for(auto it : m){
        ans.push_back(it.second);
    }
    return ans ;
}

 



int main(){
    vector<int>nums={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    vector<int>ans;
   Node*root= buildtree(nums);
   ans=topview(root,ans);
   
   for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
   }

   return 0;

}