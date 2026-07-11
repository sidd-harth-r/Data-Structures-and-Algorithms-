

// class Solution {
//   public: 
  
       
//       set<vector<char>>s;
      
//       void helper(vector<vector<int>>&a,vector<vector<bool>>&vis,int i,int j,vector<char>&v){
//           vis[i][j]=1;
//           if(i+1< a.size() && a[i+1][j]==1 && !vis[i+1][j]) {
//               v.push_back('d');
//             helper(a,vis,i+1,j,v);
//              v.push_back('b');
           
//           }
//           if(j+1 <a[0].size() && a[i][j+1]==1 && !vis[i][j+1]) {
//              v.push_back('r');
//             helper(a,vis,i,j+1,v);
//              v.push_back('b');
//           }
//           if(i-1 >=0 && a[i-1][j]==1 && !vis[i-1][j]) {
//              v.push_back('u');
//             helper(a,vis,i-1,j,v);
//             v.push_back('b');
//           }
//           if(j-1>=0 && a[i][j-1]==1 && !vis[i][j-1]) {
//                v.push_back('l');
//             helper(a,vis,i,j-1,v); 
//              v.push_back('b');
//           }
//       }
//       void dfs(vector<vector<int>>&a,vector<vector<bool>>&vis,int i,int j){
//           vector<char>v;
//            v.push_back('s');
//           helper(a,vis,i,j,v);
              
//               s.insert(v);
          
//       }
//     int countDistinctIslands(vector<vector<int>>& grid) {
//           vector<vector<bool>>vis(grid.size(),vector<bool>(grid[0].size(),0));
//          for(int i=0;i<grid.size();i++){
//             for(int j=0;j<grid[0].size();j++){
//                 if(!vis[i][j] && grid[i][j]==1 ){
//                     dfs(grid,vis,i,j);
//                 }
//             }
//          }
//          return s.size();
//     }
// };