

// class Solution {
// public:
//   vector<vector<int>>ans;
  

//    void bsf(int src,int dest,vector<int>&temp, vector<bool>&vis,vector<vector<int>>&graph){
//     vis[src]=true;
//     temp.push_back(src);
//     if(src==dest){
//         ans.push_back(temp);
//         vis[src]=false;
//         temp.pop_back();
//         return ;
//     }

//     for(int i : graph[src]){
//         if(!vis[i]){
//             bsf(i,dest,temp,vis,graph);
//         }
//     }
    
//     vis[src]=false;
//     temp.pop_back();

//    }

//     vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
//         vector<bool>vis(graph.size(),false);
//         vector<int>temp;
//         bsf(0,graph.size()-1,temp,vis,graph);

//         return ans;
//     }
// };