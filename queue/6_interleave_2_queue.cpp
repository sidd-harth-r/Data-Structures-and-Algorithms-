#include<iostream>
#include<queue>

using namespace std ;

void interleave(queue<int>&q1){
    int n=q1.size()/2;
    queue<int>q2;
     for(int i=1;i<=n;i++){
        q2.push(q1.front());
        q1.pop();
     }

     while(!q2.empty()){
        q1.push(q2.front());
        q2.pop();

        q1.push(q1.front());
        q1.pop();
     }
}


int main(){
   queue<int>q1;

   for(int i=1;i<=10;i++){
    q1.push(i);
   }
interleave(q1);

while(!q1.empty()){
    cout<<q1.front()<<" ";
    q1.pop();
}
return 0;
}