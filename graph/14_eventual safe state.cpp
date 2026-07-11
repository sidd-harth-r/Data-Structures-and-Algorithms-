// class Solution {
// public:
//    vector<int>ans;
//     bool dfs(int i,vector<vector<int>>&a,vector<bool>&pv,vector<bool>&vis){
//         vis[i]=true;
//         pv[i]=true;
       
//         for(int j=0;j<a[i].size();j++){
//             if(!vis[a[i][j]]) {
//               if(!dfs(a[i][j],a,pv,vis)) {
//                 return false;
//               }
             
//             } 
//             else{
//                 if(pv[a[i][j]]) { 
//                   return false;
//                     }
                   
//                 }
//             }
        
//         pv[i]=0;
//         ans.push_back(i);
//         return true ;
//     }
//     vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
       
//          vector<bool>vis(graph.size(),0);
//           vector<bool>pv(graph.size(),0);
    

//     for(int i=0;i<graph.size();i++){
          
//         if(!vis[i])dfs(i,graph,pv,vis);
//     } 
//     sort(ans.begin(),ans.end());
//         return ans;
//     }
// };