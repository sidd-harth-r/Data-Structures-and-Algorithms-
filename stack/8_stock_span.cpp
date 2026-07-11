#include<iostream>
#include<stack>
#include <vector>


using namespace std ;

void stockSpan(vector<int>stock,vector<int>&span){
    stack<int>s;
    
    for(int i=0;i<stock.size();i++){
       
     
            while(!s.empty()  && stock[s.top()]<=stock[i] ){
                s.pop();
            }
             if(s.empty()){
         span.push_back(i+1);
        }
        else{
            span.push_back(i-s.top());
        }
            s.push(i);
          
      
    }

}

void print(vector<int>v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}




int main(){

vector<int>stock={100,80,60,70,60,85,100};
vector<int>span;

stockSpan(stock,span);
print(span);

    return 0;
}