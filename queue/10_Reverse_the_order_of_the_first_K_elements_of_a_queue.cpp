//Reverse the order of the first K elements of a queue


#include<iostream>
#include<stack>
#include<queue>

using namespace std ;

void pushAtBottom(stack<int>&s,int value){
if(s.empty()){
    s.push(value);
    return ;
}
int x=s.top();
s.pop();
pushAtBottom(s,value);
s.push(x);

}

void reverse1(queue<int>&q,int k){
    
    stack<int>s;
    for(int i=0;i<k;i++){
        s.push(q.front());
        q.pop();
    }
  while(!q.empty()){
    pushAtBottom(s,q.front());
    q.pop();
  }

  while(!s.empty()){
    q.push(s.top());
    s.pop();
  }

}

void reverse2(queue<int>&q,int k){
    int n=q.size();
    stack<int>s;
    for(int i=0;i<k;i++){
        s.push(q.front());
        q.pop();
    }

    while(!s.empty()){
    q.push(s.top());
    s.pop();
  }

  for(int i=0;i<n-k;i++){
    q.push(q.front());
    q.pop();
  }



}

int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    reverse2(q,3);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}