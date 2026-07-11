// class Solution {
//   public:
  
//          bool check(int i,vector<vector<int>>&g,vector<bool>&vis, vector<bool>&pv ){
//           vis[i]=1;
//           pv[i]=1;
//           for(auto it : g[i]){
//               if(!vis[it]) {
//                   if(check(it,g,vis,pv)) return true;
//               }
//               else {
//                   if(pv[it]) return true;
//               }
//           }
//           pv[i]=0;
//           return false;
//       }
//          void topo(int i,vector<vector<int>>&g,vector<bool>&vis, stack<int>&s ){
//           vis[i]=1;
          
//           for(auto it : g[i]){
//               if(!vis[it]) {
//                   topo(it,g,vis,s);
//               }
            
//           }
//         s.push(i);
//       }
      
//     string findOrder(vector<string> &words) {
//        vector<vector<int>>g(26);
//        vector<bool>present(26,0);
//        for(int i=0;i<words.size();i++){
//            for(int j=0;j<words[i].size();j++){
//                if(!present[words[i][j]-'a']) present[words[i][j]-'a']=1;
//            }
//        }
//        for(int i=0;i<words.size()-1;i++){
//            int size=min(words[i].size(),words[i+1].size());
//     if((words[i].size() > words[i+1].size()) &&  (words[i].substr(0,size)==words[i+1])) return "";
//            for(int j=0;j<size;j++){
//                if(words[i][j] != words[i+1][j]){
//                    g[words[i][j]-'a'].push_back(words[i+1][j]-'a');
//                    break;
//                }
              
//            }
//        }
       
//        vector<bool>vis(26,0);
//        vector<bool>pv(26,0);
//        for(int i=0;i<26;i++){
//            if(present[i] && !vis[i]){
//                if(check(i,g,vis,pv)) return "";
//            }
//        }
     
//         vector<bool>visi(26,0);
    
//        stack<int>s;
//        for(int i=0;i<26;i++){
//            if(present[i] && !visi[i]){
//                topo(i,g,visi,s);
//            }
//        }
//        string str="";
//        while(!s.empty()){
//            char ch=(char)('a'+s.top());
//            str+=ch;
//            s.pop();
//        }
//         return str;
//     }
// };