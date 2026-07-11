// class Solution {
// public:
//     int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
//         vector<vector<int>>dist(n,vector<int>(n,INT_MAX));
//         for(int i=0;i<n;i++){
//             dist[i][i]=0;
//         }

//         for(int i=0;i<edges.size();i++){
//             int u=edges[i][0];
//             int v=edges[i][1];
//             int w=edges[i][2];
//             dist[u][v]=w;
//             dist[v][u]=w;
//         }
//           for(int via=0;via < dist.size();via++){
//        for(int i=0;i<dist.size();i++){
//        for(int j=0;j<dist.size();j++) {
//            if((dist[i][via] !=INT_MAX )  &&  (dist[via][j]!= INT_MAX)  && (dist[i][via]+ dist[via][j]  < dist[i][j])){
//                dist[i][j]=dist[i][via]+ dist[via][j];
//               }
//             }
//           }
//        }

//          int ans=-1;
//          int x=INT_MAX;
//          for(int i=dist.size()-1;i>=0;i--){
//             int count=0;
//        for(int j=0;j<dist.size();j++) {
//              if(i!=j && dist[i][j]<=distanceThreshold)count++;
//             }
//         if(count < x){
//             x=count;
//             ans=i;
//         }
//           }
//           return ans;
//     }
// };