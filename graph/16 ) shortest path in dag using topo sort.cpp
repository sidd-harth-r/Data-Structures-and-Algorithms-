
// class Solution {
//   public:
  
//      void topo(int i,vector<vector<pair<int,int>>>&g,vector<bool>&vis,stack<int>&s){
//          vis[i]=1;
//          for(auto it : g[i]){
//              int u=it.first;
//              if(!vis[u]){
//                  topo(u,g,vis,s);
//              }
//          }
//          s.push(i);
//      }
     
//     vector<int> shortestPath(int N, int E, vector<vector<int>>& edges) {
//        vector<vector<pair<int,int>>>g(N);
//        for(int i=0;i<E;i++){
//            int u=edges[i][0];
//            int v=edges[i][1];
//            int wt=edges[i][2];
//            g[u].push_back({v,wt});
//        }
       
//        stack<int>s;
//        vector<bool>vis(N,0);
//        for(int i=0;i<N;i++){
//            if(!vis[i])topo(i,g,vis,s);
//        }
//       vector<int>dis(N,INT_MAX);
//       dis[0]=0;
//       while(!s.empty()){
//           int node=s.top();
//           s.pop();
//           for(auto it : g[node]){
//               int v=it.first;
//               int wt=it.second;
//               if(dis[node]!=INT_MAX && dis[node]+wt < dis[v]){
//                   dis[v]=dis[node]+wt;
//               }
//           }
           
//       }
//       for(int i=0;i<N ;i++){
//           if(dis[i]==INT_MAX){
//               dis[i]=-1;
//           }
//       }
//         return dis;
//     }
// };