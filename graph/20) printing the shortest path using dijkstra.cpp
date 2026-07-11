// class Solution {
//   public:
//     vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
    
//        vector<vector<pair<int,int>>> g(n+1);

//        for(int i=0;i<m;i++){
//            int u = edges[i][0];
//            int v = edges[i][1];
//            int w = edges[i][2];

//            g[u].push_back({v,w});
//            g[v].push_back({u,w});
//        }

//        priority_queue<
//            pair<int,int>,
//            vector<pair<int,int>>,
//            greater<pair<int,int>>
//        > pq;

//        pq.push({0,1});

//        vector<int> dist(n+1, INT_MAX);
//        vector<int> parent(n+1, -1);

//        dist[1] = 0;

//        while(!pq.empty()){

//            int di = pq.top().first;
//            int node = pq.top().second;

//            pq.pop();

//            if(di > dist[node]) continue;

//            for(auto it : g[node]){

//                if(it.second + di < dist[it.first]){

//                    dist[it.first] = it.second + di;

//                    parent[it.first] = node;

//                    pq.push({dist[it.first], it.first});
//                }
//            }
//        }

//        if(dist[n] == INT_MAX) return {-1};

//        vector<int> ans;

//        stack<int> s;

//        int par = n;

//        while(par != -1){
//            s.push(par);
//            par = parent[par];
//        }

//        ans.push_back(dist[n]);

//        while(!s.empty()){
//            ans.push_back(s.top());
//            s.pop();
//        }

//        return ans;
//     }
// };