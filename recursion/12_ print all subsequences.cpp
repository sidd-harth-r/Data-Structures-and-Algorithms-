#include<iostream>
#include<vector>
using namespace std ;

void print(vector<int>&a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void f(vector<int>&a,vector<int>&b, int i){
    if(i==a.size()){
        print(b);
        return;
    }
     b.push_back(a[i]);
    f(a,b,i+1);
    b.pop_back();
    f(a,b,i+1);
    
}

int main(){
    vector<int>v={1,2,3};
    vector<int>a;
    f(v,a,0);
}