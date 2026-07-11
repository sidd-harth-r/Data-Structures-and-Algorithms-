// class Solution {
// public:
//     vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
//        queue<pair<int,int>>q;
//        vector<vector<int>>ans(mat.size(),vector<int>(mat[0].size(),0));
//        vector<vector<bool>>vis(mat.size(),vector<bool>(mat[0].size(),0));
//        for(int i=0;i<mat.size();i++ ){
//         for(int j=0;j<mat[0].size();j++){
//           if(mat[i][j]==0){
//             vis[i][j]=1;
//             ans[i][j]=0;
//             q.push(make_pair(i,j));
//           }  
//         }
//        }
//         while(!q.empty()){
        
//            int r=q.front().first;
//            int c=q.front().second;
//            q.pop();

//            if(r+1 <mat.size() && !vis[r+1][c] && mat[r+1][c]==1){
//             ans[r+1][c]=ans[r][c]+1;
//             vis[r+1][c]=1;
//             q.push(make_pair(r+1,c));
//            }
//            if(c+1 <mat[0].size() && !vis[r][c+1] && mat[r][c+1]==1){
//             ans[r][c+1]=ans[r][c]+1;
//             vis[r][c+1]=1;
//             q.push(make_pair(r,c+1));
//            }
//            if(r-1 >=0 && !vis[r-1][c] && mat[r-1][c]==1){
//             ans[r-1][c]=ans[r][c]+1;
//             vis[r-1][c]=1;
//             q.push(make_pair(r-1,c));
//            }
//            if(c-1 >=0 && !vis[r][c-1] && mat[r][c-1]==1){
//             ans[r][c-1]=ans[r][c]+1;
//             vis[r][c-1]=1;
//             q.push(make_pair(r,c-1));
//            }
//         } 
//         return ans;
//     }
// };