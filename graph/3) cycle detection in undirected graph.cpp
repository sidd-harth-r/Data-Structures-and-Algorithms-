#include<iostream>
#include<vector>
#include<list>

using namespace std ;

class Graph{
    public :
    int V ;
    list<int>* l;

    Graph(int V){
        this->V=V;
        l= new list<int> [V];
    }

    void addEdge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    bool isCycle(int src,vector<bool>&vis,int parent){
     vis[src]=true;
     for(int i : l[src]){
        if(vis[i]!=true){
          if(isCycle(i,vis,src)) return true;
        }
        else {
            if(i!=parent) return true;
        }
     }
     return false ;
    }

    bool dfs(){
        vector<bool>vis(V,false);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(isCycle(i,vis,-1)) return true;
            }
        }
        return false ;
    }
};


int main(){
          Graph graph(5);
      graph.addEdge(1,0);
    //   graph.addEdge(0,2);
      graph.addEdge(3,4);
      graph.addEdge(1,2);
      graph.addEdge(3,0);
      
     

    
     cout<<graph.dfs();
}