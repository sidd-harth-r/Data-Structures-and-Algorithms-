#include<iostream>
#include<string>

using namespace std ;

void Print_subset(string str,string subset){
    int n=str.length();
    if(n==0){
         cout<<subset<<",";
         return;
    }
    char ch=str[0];
    Print_subset(str.substr(1,n-1),subset+ch);
    Print_subset(str.substr(1,n-1),subset);
}

int main(){
    string str ="abc";
    Print_subset(str,"");
    return 0;
}