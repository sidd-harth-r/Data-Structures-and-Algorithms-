#include<iostream>
using namespace std ;

int factorial(int a){
    
    int fact=1;
  
    for(int i=a;i>0;i--){
        fact*=i;
    }
    return fact ;
}

int bincoeff(int n,int r){
    int a =factorial(n);
    int b =factorial(n-r);
    int c =factorial(r);
    return a/(b*c) ;
}

int main(){
    int n,r;
    cout<<"enter the value of n \n";
    cin>>n;
cout<<"enter the value of r \n";
    cin>>r;

  

    cout <<"the binomial coefficient is : "<<bincoeff(n,r)<<endl;
    return 0;
}