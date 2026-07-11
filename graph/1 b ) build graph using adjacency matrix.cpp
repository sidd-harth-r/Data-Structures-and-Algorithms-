#include<iostream>
#include<vector>


using namespace std ;

int main(){
    int u,v;
    int n,m;
    cin>>n>>m;
   int adj[n+1][n+1];

   for(int i=0;i<m;i++){
    cin>>u>>v;
    adj[u][v]=1;
    adj[v][u]=1;
   }
}