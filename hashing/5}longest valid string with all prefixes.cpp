// class Node{
//     public :
//     unordered_map<char,Node*>children;
   
//     bool endofword ;
    
//     Node (){
//         endofword=false;
    
//     }
// };


// class Trie{
//     public :
//     Node * root ;
    
//     Trie (){
//         root = new Node();
       
//     }
    
//     void insert(string s){
//         Node*temp=root;
//         for(int i=0;i<s.size();i++){
//             if(!temp->children.count(s[i])){
//                 Node* newNode=new Node();
//                 temp->children[s[i]]=newNode;
               
//             }
            
//             temp=temp->children[s[i]];
//             }
            
//         temp->endofword=true;
//         }
    
    
//     void longestprefix(Node* root,string &ans,string temp){
        
       
          
          
       
//         for(auto it : root->children){
//        if(it.second->endofword){
//          temp =temp+it.first;
//     if((temp.size()==ans.size() && temp<ans )  || temp.size()>ans.size()){
  
//             ans =temp;
  
//     }
    
         
//          longestprefix(it.second,ans,temp); 
//          temp=temp.substr(0,temp.size()-1);
//         }
//         }
       
//     }
// };




// class Solution {
//     public :
  
//     string longestValidWord(vector<string>& words) {
//          Trie trie;
     
//      for(int i=0;i<words.size();i++){
//          trie.insert(words[i]);
      
//      }
//      string ans="";
//      trie.longestprefix(trie.root,ans,"");
//      return ans;
//     }
// };