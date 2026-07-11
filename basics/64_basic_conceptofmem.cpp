// address of the memory location are stored in the form of hexadecimal form 
// &(ampersand)- it is called address of operator  
// it gives the address of a variable 
// address of the variables begin with 0x
// The 0x is not part of the address itself, it’s just notation.
// 0x is just a prefix that tells you: "This number is written in hexadecimal (base 16)."

#include<iostream>
using namespace std ;

int main(){
    int a=10;
    cout<<"the address of a is : "<<&a<<endl;
    return 0;
}
