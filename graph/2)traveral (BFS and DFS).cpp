#include<iostream>
#include<vector>
#include<list>
#include<queue>

using namespace std;

class Graph{
    public:
    int V;
    list<int> * l;
    Graph(int V){
        this->V=V;
        l=new list<int> [V];
    }

    void addEdge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void print(){
        for(int u=0;u<V;u++){
            list<int>neighbours=l[u];
            cout<<u<<" : ";
            for(int v : neighbours){
                cout<<v<<" ";
            }
            cout<<endl;
        }
    }

     void bfshelper(int i,vector<bool>&visited){
       
        queue<int>q;
        q.push(i);
        visited[i]=1;

        while(!q.empty()){
            int curr=q.front();
            q.pop();
            cout<<curr<<" ";
        for(int v : l[curr]){
            if(visited[v]!=1){
                q.push(v);
                visited[v]=1;
            }
        }
        }

     }

     void bfs(){
 vector<bool>visited(V,0);
 for(int i=0;i<V;i++){
    if(!visited[i]){
        bfshelper(i,visited);
    }
 }
     }


     void helper(int u,vector<bool>&vis){
       vis[u]=1;
       cout<<u<<" ";

       for(int v : l[u]){
          if(vis[v]!=1){
            helper(v,vis);
          }
       }
     }

     void dfs(){
        vector<bool>vis(V,false);
        for(int i=0;i<V;i++){
            if(!vis[i])
            helper(i,vis);
        }
     }

};

int main(){
      Graph graph(10);
      graph.addEdge(1,6);
      graph.addEdge(0,2);
      graph.addEdge(3,4);
      graph.addEdge(2,5);
      graph.addEdge(3,7);
      graph.addEdge(4,6);
      graph.addEdge(3,8);
      graph.addEdge(4,9);
     

      graph.print();
      graph.bfs();

}