#include<iostream>
using namespace std ;

void permutation(string str,string ans ){
    int n=str.length();
    if(n==0) {
        cout<<ans<<",";
        return ;
    }

    for(int i=0;i<n;i++){
        permutation(str.substr(0,i)+str.substr(i+1),ans+str[i]);
    }
}

int main(){
    string str ="abc";
    permutation(str,"");
}