#include<iostream>
#include<vector>
#include<list>
#include<stack>

using namespace std;

class Graph{
    public :
    int V;
    list<int> *l;
    Graph(int V){
        this->V=V;
        l=new list<int>[V];
    }

    void addEdge(int u,int v){
        l[u].push_back(v);
    }

    void helper(int src,vector<bool>&vis,stack<int>&s){
     vis[src]=true;
     for(int i : l[src]){
        if(!vis[i]){
            helper(i,vis,s);
        }
     }
     s.push(src);
    }

    void bsf(){
        vector<bool>vis(V,false);
        stack<int>s;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                helper(i,vis,s);
            }
        }

        while(!s.empty()){
            cout<<s.top()<<" ";
            s.pop();
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

    graph.bsf();

}

