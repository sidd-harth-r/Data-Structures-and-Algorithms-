// class Solution {
// public:

//   void helper(int i,int j,vector<vector<int>>& grid,queue<pair<int,int>>&q){
//       if(i-1 >=0 && grid[i-1][j]==1) {
//         grid[i-1][j]=2;
//         q.push(make_pair(i-1,j));

//   }
//       if(i+1 <grid.size() && grid[i+1][j]==1) {
//         grid[i+1][j]=2;
//         q.push(make_pair(i+1,j));

//   }
//       if(j-1 >=0 && grid[i][j-1]==1) {
//         grid[i][j-1]=2;
//         q.push(make_pair(i,j-1));

//   }
//       if(j+1 < grid[0].size() && grid[i][j+1]==1) {
//         grid[i][j+1]=2;
//         q.push(make_pair(i,j+1));

//   }
//   }

//   bool check(vector<vector<int>>& grid){
//      for(int i=0;i<grid.size();i++){
//             for(int j=0;j<grid[i].size();j++){
//                 if(grid[i][j]==1){
//                    return false;
//                 }
//             }
//         }
//         return true;
//   }

//     int orangesRotting(vector<vector<int>>& grid) {
//         queue<pair<int,int>>q;
//         for(int i=0;i<grid.size();i++){
//             for(int j=0;j<grid[i].size();j++){
//                 if(grid[i][j]==2){
//                     q.push(make_pair(i,j));
//                 }
//             }
//         }
        
//          q.push(make_pair(-1,-1));

//         int count=0;

//         while(!q.empty()){
//             pair<int,int>p=q.front();
//             q.pop();
//             if(p.first==-1){
//              if(q.empty()) break;
//              count++;
//              q.push(make_pair(-1,-1));
//              continue;
//             }

//             helper(p.first,p.second,grid,q);
//         }
//         if(check(grid)) return count;

//         return -1;
        
//     }
// };