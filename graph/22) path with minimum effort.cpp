// class Solution {
// public:
//     int minimumEffortPath(vector<vector<int>>& heights) {
//       vector<vector<int>>dist(heights.size(),vector<int>(heights[0].size(),INT_MAX));
//       priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>pq;
//       pq.push({0,0,0});
//       dist[0][0]=0;

//       while(!pq.empty()){
//             int maxdiff=pq.top()[0];
//             int row=pq.top()[1];
//             int col=pq.top()[2];

//              pq.pop();
//             if( maxdiff> dist[row][col])continue;

//            vector<int>nrow={-1,0,1,0};
//            vector<int>ncol={0,1,0,-1};
//            for(int i=0;i<nrow.size();i++){

                   
//                          int newrow=row+nrow[i];
//                          int newcol=col+ncol[i];
//                          if(newrow >=0 && newrow <heights.size()  && newcol>=0 && newcol<heights[0].size() ){
//                             int d=max(abs(heights[newrow][newcol]-heights[row][col]),maxdiff);
//                             if(d < dist[newrow][newcol]){
//                                 dist[newrow][newcol]=d;
//                                 pq.push({dist[newrow][newcol],newrow,newcol});
//                             }
                         
//                     }
//            }
                
            
//       }
//       return dist[heights.size()-1][heights[0].size()-1];

//     }
// };