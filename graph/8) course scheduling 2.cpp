
// class Graph{
//     public :
//     int V;
//     list<int> *l;
//     Graph(int V){
//         this->V=V;
//         l=new list<int>[V];
//     }

//     void addEdge(int u,int v){
//         l[u].push_back(v);
//     }

//     void helper(int src,vector<bool>&vis,stack<int>&s){
//      vis[src]=true;
//      for(int i : l[src]){
//         if(!vis[i]){
//             helper(i,vis,s);
//         }
//      }
//      s.push(src);
//     }

//      vector<int> topologicalSort(){
//         vector<bool>vis(V,false);
//         stack<int>s;
//         for(int i=0;i<V;i++){
//             if(!vis[i]){
//                 helper(i,vis,s);
//             }
//         }
//         vector<int>ans;

//         while(!s.empty()){
//           ans.push_back(s.top());
//             s.pop();
//         }
//         return ans;

//     }

    
//     bool isCycle(int src,vector<bool>&vis,vector<bool>&recPath){
//         vis[src]=true;
//         recPath[src]=true;

//         for(int i : l[src]){
//             if(!vis[i]){
//                 if(isCycle(i,vis,recPath)) return true;
//             }
//             else {
//                 if(recPath[i]) return true;
//             }
//         }
//          recPath[src]=false;
//          return false;

        
//     }

//     bool bsf(){
//         vector<bool>vis(V,false);
//         vector<bool>recPath(V,false);
//         for(int i=0;i<V;i++){
//             if(!vis[i]){

//             if(isCycle(i,vis,recPath)) return false;
//             }
//         }
//         return true;
//     }

// };

// class Solution {
// public:
//     vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
//         Graph graph(numCourses);
//         for(int i=0;i<prerequisites.size();i++){
//            graph.addEdge(prerequisites[i][1],prerequisites[i][0]);
//         }
//     if(!graph.bsf()) return {};
//     return graph.topologicalSort();
//     }
// };