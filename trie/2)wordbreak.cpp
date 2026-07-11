// class Node{
//     public : 
//     unordered_map<char,Node*>children;
//     bool endofword;
//     Node(){
//         endofword=false;
//     }

// };

// class Trie {
//     public:
//      Node * root;
//      Trie(){
//         root=new Node();
//      }
    
//     void insert(string s){
//     Node * temp=root;
//     for(int i=0;i<s.size();i++){
//         if(!temp->children.count(s[i])){
//             Node * newNode=new Node();
//             temp->children[s[i]]=newNode;
//         }
//         temp=temp->children[s[i]];
//     }
//     temp->endofword=true;
//     }

//     bool search(string s){
//          Node * temp=root;
//         for(int i=0;i<s.size();i++){
//         if(!temp->children.count(s[i])){
//             return false;
//         }
//         temp=temp->children[s[i]];
//     }
//     return temp->endofword;
//     }
// };

 

// class Solution {
// public:

//     bool func(string s,Trie &trie){
//         if(s.size()==0)  return true;

//         for(int i=0;i<s.size();i++){
//            bool firsthalf= (trie.search(s.substr(0,i+1)));
//            if(firsthalf && func(s.substr(i+1),trie)){
//             return true;
//            }
         
//         }
//         return false ;
//     }
//     bool wordBreak(string s, vector<string>& wordDict) {
//         Trie trie ;

//         for(int i=0;i<wordDict.size();i++){
//             trie.insert(wordDict[i]);
//         }

//         return func(s,trie);

//     }
// };