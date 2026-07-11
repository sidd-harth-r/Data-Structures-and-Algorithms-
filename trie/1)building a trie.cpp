#include<iostream>
#include<vector>
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
    public :
    Node* root ;
    Trie(){
        root=new Node();
}

void insert(string s){
    Node* temp=root;
    for(int i=0;i<s.size();i++){
        if(!temp->children.count(s[i])){
            Node*newNode=new Node();
            temp->children[s[i]]=newNode;
        }
        temp=temp->children[s[i]];
    }
    temp->endofword=true;
}

bool search(string s ){
    Node* temp=root;
    for (int i=0;i<s.size();i++){
        if(!temp->children.count(s[i])) return false ;
        temp=temp->children[s[i]];
    }
 return (temp->endofword) ;
    
}
};


int main(){
    vector<string>v={"the","a","there","their","any","thee"};
   Trie trie;

   for(int i=0;i<v.size();i++){
    trie.insert(v[i]);
   }

   cout<<trie.search("thee")<<endl;
   return 0;
}