// multiple functions with same name but different parameters is called function overloading 
// different parameters can be inter preted in two ways : 1. type is different   2. number of parameters 

#include<iostream>
using namespace std ;

int sum(int a,int b){
    cout<<"the sum is : "<<a+b<<endl;
    return a+b  ;
}
int sum(int a,int b,int c){
    cout<<"the sum is : "<<a+b+c<<endl;
    return a+b+c  ;
}

double sum (double a , double b ){
     cout<<"the sum is : "<<a+b<<endl;
    return a+b ;
}

int main(){
    sum(2,3);
    sum(2.3,3.6);
    sum(1,2,3);
    
}