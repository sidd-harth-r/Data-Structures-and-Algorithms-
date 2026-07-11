// functions are the block of code which runs when it is called 
/*
return_type fname(){
// some work 

return value ; -------optional 
}

fname()------- function call

*/
#include<iostream>
using namespace std ;

void print(){
    cout<<"hello\n";
}

void assistant(){
    print();
    cout<<"work done \n";
}

int main(){
    assistant();
   return 0; 
}