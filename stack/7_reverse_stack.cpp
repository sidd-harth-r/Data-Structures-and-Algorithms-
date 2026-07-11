// only using recursion no extra space is allowed 

#include<iostream>
#include<stack>
using namespace std;
void pushAtBottom(stack<int>&s,int value){
    if(s.empty()){
        s.push(value);
        return;
    }

    int x=s.top();
    s.pop();
    pushAtBottom(s,value);
    s.push(x);
}

void reverseStack(stack<int>&s){
    if(s.empty())  return ;
    int x=s.top();
    s.pop();
    reverseStack(s);
    pushAtBottom(s,x);

}
void printStack(stack<int>s){
    while(s.empty()==false ){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<"\n";
}


int main(){
    stack<int>s;
   
     s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);


   printStack(s);

    reverseStack(s);
    printStack(s);

     
return 0;
}

