/*
passing arguments to functions can be done in two ways :
1. pass by value -  when parameter is a copy of actual argument variable in memory
2. pass by reference - when we pass the address of the argument to the function  , it acn be done in two ways that is 
  a . using pointers   b. using reference variables 
  

*/
#include<iostream>
using namespace std ;

// void changeA(int a){
//     a=20;
//     cout<<a<<"\n";
// }
void changeA(int *ptr){
    *ptr=20;
    cout<<"the value of a is :" << *ptr<<endl;
}

int main(){
    int a=10;
changeA(&a);
cout<<a<<"\n";
return 0;
}
