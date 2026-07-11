#include<iostream>
#include<vector>

using namespace std ;

class Stack{
 
    public:

    vector<int>vec;

    void push(int value){
        vec.push_back(value);

    }

    void pop(){
        if(is_empty()){
            cout<<"the stack is empty\n;";
            return;
        }
        vec.pop_back();

    }

    int top(){
        if(is_empty()){
            cout<<"the stack is empty\n;";
            return -1;
        }
        int topidx= vec.size()-1;
        return vec[topidx];
    }

    bool is_empty(){
        return (vec.size()==0);
    }
};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    while(s.is_empty()==0){
  cout<<s.top()<<" ";
  s.pop();
    }

    return 0;
}