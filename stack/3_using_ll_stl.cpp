#include<iostream>
#include<list>
using namespace std ;

template<class T>
class Stack{
list<T>ll;

public :

void push(T value){
    ll.push_front(value);
}

void pop(){
    ll.pop_front();
}

T top(){
    return *ll.begin();
}

bool is_empty(){
    return ll.size()==0;
}
};


int main(){
  Stack<int>s;

  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);

  while(s.is_empty()==false){
    cout<<s.top()<<" ";
    s.pop();
  }
  return 0;
}

