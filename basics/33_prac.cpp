// wap to print all the prime numbers till the number n
#include<iostream>
#include<cmath>

using namespace std ;
int main(){
    int n;
    cout<<"enter the number \n";
    cin>>n;
    cout<<"the prime numbers till n are : ";
for(int i=2;i<=n;i++){
    bool isprime=true;
    for(int j=2;j<=sqrt(i);j++)
    {
      if(i%j==0){
        isprime=false ;
        break;
      }
    }
    if(isprime){
        cout<<i<<" ";
    }
}

}