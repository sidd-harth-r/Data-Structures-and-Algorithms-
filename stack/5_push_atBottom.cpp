#include<iostream>
#include<stack>

using namespace std ;

void pushAtBottom(stack<int>&s,int value){

if(s.empty())  {
    s.push(value);
    return;
}

int x=s.top();
s.pop();
pushAtBottom(s,value);
s.push(x);

}

int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);

    pushAtBottom(s,0);

    while(s.empty()==false ){
        cout<<s.top()<<" ";
        s.pop();
    }

return 0;
}