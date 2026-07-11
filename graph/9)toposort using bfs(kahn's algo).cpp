#include<iostream>
#include<vector>
#include<list>
#include<queue>

using namespace std;

class Graph{
    public:
   int V ;
   list<int>*l;
   Graph(int V ){
    this->V=V;
    l=new list<int> [V];
   }
    
   void addEdge(int u,int v){
    l[u].push_back(v);
  
   }
  
   void calcIndegree(vector<int>&indegree){
    for(int i =0;i<V;i++){
        for(int v : l[i]){
            indegree[v]++;
        }
    }
   }

    void toposort(){
        vector<int>indegree(V,0);
        calcIndegree(indegree);
        queue<int>q;
        for(int i=0;i<V;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
            while(!q.empty()){
                int curr=q.front();
                q.pop();
                cout <<curr<<" ";

                for(int i : l[curr]){
                    indegree[i]--;
                    if(indegree[i]==0){
                        q.push(i);
                    }
                }
            
        }
    }

};

int main(){
    Graph graph(6);

     graph.addEdge(5,0);
    graph.addEdge(4,0);
    graph.addEdge(5,2);
    graph.addEdge(4,1);
    graph.addEdge(2,3);
    graph.addEdge(3,1);

    graph.toposort();
}