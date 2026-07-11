// class Node{
//     public :
//     unordered_map<char,Node*>children;
//     int freq;
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
//         root->freq=-1;
//     }
    
//     void insert(string s){
//         Node*temp=root;
//         for(int i=0;i<s.size();i++){
//             if(!temp->children[s[i]]){
//                 Node* newNode=new Node();
//                 temp->children[s[i]]=newNode;
//                  temp->children[s[i]]->freq=1;
//             }
//             else {
//                temp->children[s[i]]->freq++;  
//             }
            
//             temp=temp->children[s[i]];
//         }
//         temp->endofword=true;
//     }
    
//     string uniquePrefix(string s){
//         Node* temp=root;
//         string prefix="";
//         for(int i=0;i<s.size();i++){
//              temp=temp->children[s[i]];
//              prefix=prefix+s[i];
//            if(temp->freq==1){
//               return prefix;
//            }
//         }
//         return prefix;
//     }
// };

// class Solution {
//     public:
//     vector<string> findPrefixes(string arr[], int n) {
//      Trie trie;
     
//      for(int i=0;i<n;i++){
//          trie.insert(arr[i]);
         
//      }
//      vector<string>ans;
     
//      for(int i=0;i<n;i++){
//          string str=trie.uniquePrefix(arr[i]);
//          ans.push_back(str);
//      }
     
//      return ans;
     
//     }
// };