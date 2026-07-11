// class Solution {
//   public:
//     vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
      
//       vector<vector<pair<int,int>>>g(V);
//       for(int i=0;i<edges.size();i++){
//           int u=edges[i][0];
//           int v=edges[i][1];
//           int w=edges[i][2];
//           g[u].push_back({w,v});
//       }
      
//       vector<int>dist(V,INT_MAX);
//       dist[src]=0;
//       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
//       pq.push({0,src});
//       while(!pq.empty()){
//           int d=pq.top().first;
//           int node=pq.top().second;
          
//           pq.pop();
//         if(d > dist[node]) continue;
          
//           for(auto it : g[node]){
//               if(d+it.first < dist[it.second]){
//                   dist[it.second]=d+it.first;
//                   pq.push({dist[it.second],it.second});
//               }
//           }
//       }
//       for(int i=0;i<dist.size();i++){
//           if(dist[i]==INT_MAX)dist[i]=-1;
//       }
//         return dist;
//     }
// };