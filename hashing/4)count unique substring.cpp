#include<iostream>
#include<string>
#include<unordered_map>

using namespace std ;


class Node {
    public :
    unordered_map<char,Node*>children;
    bool endofword;

    Node(){
        endofword=false;
    }
};

class Trie{
    public:
    Node* root;
    Trie(){
        root=new Node();
    }

    void insert(string s){
        Node * temp=root;

        for (int i=0;i<s.size();i++){
           if(!temp->children.count(s[i])){
            Node* newNode=new Node();
            temp->children[s[i]]=newNode ;
           }
           temp= temp->children[s[i]];
        }
        temp->endofword=true;
    }

    int countunique(Node* root){
        int ans =0;
        for(auto it : root->children){
         ans+=countunique(it.second);
        }
   return ans +1;
    }
};

int main(){
    Trie trie;
 string str="abc";
 for(int i=0;i<str.size();i++){

     trie.insert(str.substr(i));
 }
cout<<trie.countunique(trie.root)<<endl;
return 0;
}