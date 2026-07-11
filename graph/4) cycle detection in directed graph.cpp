#include<iostream>
#include<vector>
#include<list>

using namespace std ;

class Graph{
    public :
    int V ;
    list<int>* l;
    bool isUndir;

    Graph(int V, bool isUndir=true){
        this->V=V;
        l= new list<int> [V];
        this->isUndir=isUndir;
    }

    void addEdge(int u,int v){
        l[u].push_back(v);
        if(isUndir) l[v].push_back(u);
       
    }
    bool isCycle(int src,vector<bool>&vis,vector<bool>&recPath){
     vis[src]=true;
     recPath[src]=true;
     for(int i : l[src]){
        if(vis[i]!=true){
          if(isCycle(i,vis,recPath)) return true;
        }
        else {
            if(recPath[i]) return true;
        }
     }
      recPath[src]=false;
     return false ;
    }

    bool dfs(){
        vector<bool>vis(V,false);
        vector<bool>recPath(V,false);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(isCycle(i,vis,recPath)) return true;
            }
        }
        return false ;
    }
};


int main(){
          Graph graph(4,false);
      graph.addEdge(1,0);
      graph.addEdge(2,0);
      graph.addEdge(2,3);
    //   graph.addEdge(1,2);
      graph.addEdge(3,0);
      
     

    
     cout<<graph.dfs();
}