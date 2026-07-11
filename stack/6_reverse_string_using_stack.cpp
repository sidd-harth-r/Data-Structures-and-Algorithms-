#include<iostream>
#include<string>
#include<stack>
using namespace std ;


void reverseString(stack<char> &s,string &str){
     for(int i=0;i<str.size();i++){
        s.push(str[i]);
    }

  for(int i=0;i<str.size();i++){
    str[i]=s.top();
    s.pop();
  }

}

int main(){
    string str="hello this is Sid";
    stack<char>s;
    reverseString(s,str);
    cout<<str;
return 0;
}

