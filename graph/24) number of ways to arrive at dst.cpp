// # define MOD 1000000007

// class Solution {
// public:
//     int countPaths(int n, vector<vector<int>>& roads) {
//       vector<vector<pair<int,int>>>g(n);
//         for(int i=0;i<roads.size();i++){
//             int u=roads[i][0];
//             int v=roads[i][1];
//             int w=roads[i][2];
//             g[u].push_back({v,w});
//             g[v].push_back({u,w});
//         }
//         vector<long long>dist(n,LLONG_MAX);
//         vector<long long >ways(n,0);
//         ways[0]=1;
//         dist[0]=0;
//         priority_queue<pair<long,long>,vector<pair<long,long>>,greater<pair<long,long>>>pq;
//         pq.push({0,0});
//         while(!pq.empty()){
//             long long  time=pq.top().first;
//             long long  node= pq.top().second;
//             pq.pop();
//            if (time > dist[node]) continue;
//             for(auto it : g[node]){
//                 if(time + it.second <  dist [it.first] ){
//                      dist[it.first]= time + it.second  ;
//                      ways[it.first]=ways[node];
//                     pq.push({dist[it.first],it.first});
//                 }
//                 else if(time + it.second == dist [it.first]){
//                     ways[it.first]=(ways[node] +  ways[it.first])%MOD;
//                 }
//             }
//         }
//          return  ways[n-1] %MOD;
//     }
// };