// class Solution {
// public:

     
//      bool helper(int src,vector<bool>& vis,vector<bool>&color ,vector<vector<int>>graph){
//         queue<int>q;
//         q.push(src);
//         vis[src] = true;
//         color[src]=true;
//         while(!q.empty()){
//             int p=q.front();
//             q.pop();
//         for(int i : graph[p] )
//             if(!vis[i]){
//                 vis[i]=true;
//                 color[i]=!(color[p]);
//                 q.push(i);
//             }
//             else {
//                 if(color[i]==color[p]) return false ;
//             }
//         }
//         return true;
//      }


//     bool isBipartite(vector<vector<int>>& graph) {
//            int V=graph.size();
        
//         vector<bool>vis(V,false);
//         vector<bool>color(V,false);
//         for(int i=0;i<V;i++){
//             if(!vis[i]){
//                if(!helper(i,vis,color,graph)) return false;
//             }
//         }
//         return true;
    
//     }

// };