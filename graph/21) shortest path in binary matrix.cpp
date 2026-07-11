// class Solution {
// public:
//     int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
//         if(grid[0][0]==1 || grid[grid.size()-1][grid.size()-1]==1 ) return -1;
//         vector<vector<int>>dist(grid.size(),vector<int>(grid[0].size(),-1));
//         for(int i=0;i<grid.size();i++){
//             for(int j=0;j<grid[0].size();j++){
//                 if(grid[i][j]==0)dist[i][j]=INT_MAX;
//             }
//         }
//         dist[0][0]=0;
//         priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>pq;
//         pq.push({0,0,0});
//         while(!pq.empty()){
//             int row=pq.top()[1];
//             int col=pq.top()[2];
//             int d=pq.top()[0];
//             pq.pop();
//             if(d > dist[row][col])continue;

//             for(int nrow =-1;nrow <=1;nrow++){
//                 for(int ncol =-1;ncol<=1;ncol++){
//                     if(nrow==0 && ncol ==0) continue;
//                          int newrow=row+nrow;
//                          int newcol=col+ncol;
//                          if(newrow >=0 && newrow <grid.size()  && newcol>=0 && newcol<grid[0].size() && grid[newrow][newcol]==0){
//                             if(d+1 < dist[newrow][newcol]){
//                                 dist[newrow][newcol]=d+1;
//                                 pq.push({dist[newrow][newcol],newrow,newcol});
//                             }
                         
//                     }
//                 }
//             }
//         }
//         if(dist[grid.size()-1][grid.size()-1]==INT_MAX) return -1;
//         return dist[grid.size()-1][grid.size()-1]+1;
//     }
// };