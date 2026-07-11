#include<iostream>
#include<vector>
#include<string>
using namespace std ;

template<class T>

class Stack{
    vector<T>vec;

    public:
    void push(T value){

        vec.push_back(value);
    }

    void pop(){
     vec.pop_back();
    }

    T top(){
        int top_idx=vec.size()-1;
        return vec[top_idx];
    }

    bool is_empty(){
        return vec.size()==0;
    }
};


int main(){
    Stack<string>s;
    s.push("hello");
    s.push("this is sid");
    s.push("bye");

    while(s.is_empty()==false){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}

