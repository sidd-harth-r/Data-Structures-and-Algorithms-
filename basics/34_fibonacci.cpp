#include<iostream>
using namespace std ;
int main(){
    int n, third,first =0,second=1 ;
    cout<<"enter the number \n";
    cin>>n;
    cout<<first<<" "<<second<<" ";

    for(int i=2;i<=n;i++){
      third =first +second ;
      cout<<third<<" ";
      first =second;
      second = third ;
    }
}