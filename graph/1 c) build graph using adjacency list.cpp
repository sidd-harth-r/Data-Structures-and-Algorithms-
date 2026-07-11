#include<iostream>
#include<vector>


using namespace std ;

int main(){
    int u,v;
    int n,m;
    cin>>n>>m;
   vector<int>adj[n+1];

   for(int i=0;i<m;i++){
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
    
   }
}