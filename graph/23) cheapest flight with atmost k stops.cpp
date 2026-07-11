// class Solution {
// public:
//  int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
//        vector<vector<pair<int,int>>>g(n);
//        for(int i=0;i<flights.size();i++){
//         int u=flights[i][0];
//         int v=flights[i][1]; 
//         int w=flights[i][2];
//       g[u].push_back({v,w});
//        } 
//         vector<int>dist(n,INT_MAX);
//         dist[src]=0;
//        queue<vector<int>>q;
//        q.push({src,0,-1}); // node , cost , stops
    
//        while(!q.empty()){
//         int node=q.front()[0];
//         int cost=q.front()[1];
//         int stops=q.front()[2];
//         q.pop();
//         if(stops >= k) continue;

//         for(auto it : g[node]){
//             if(cost+it.second < dist[it.first]){
//                 dist[it.first]=cost+it.second;
//            q.push({it.first,cost+it.second,stops+1});
//             }
//         }

//        } 
//         if(dist[dst]==INT_MAX) return -1;
//         return dist[dst];
//     }
// };