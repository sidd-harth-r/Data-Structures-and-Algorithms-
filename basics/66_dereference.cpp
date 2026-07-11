// * is called dereferncing operator , it gets the value of the variable pointed by any pointer 
// remember it as value at address 
// it allows to access as well as modify the value of the variable 


#include<iostream>
using namespace std ;

int main(){
    int a=10;
    int *ptr=&a;
    cout<<*(&a)<<" = "<<*ptr<<endl;
    *ptr=20;
    cout<<a<<endl;
}