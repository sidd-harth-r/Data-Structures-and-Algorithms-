#include<iostream>
using namespace std ;

int factorial(int a){
    
    int fact=1;
  
    for(int i=a;i>0;i--){
        fact*=i;
    }
    return fact ;
}

int main(){
    int n;
    cout<<"enter the number to find factorial\n";
    cin>>n;
    int f=factorial(n);
    cout <<"the factorial of the number is : "<<f<<endl;
}