// reference varaible is an alternate name given to the exiesting variable
//refernce variables should always be initialised 

#include<iostream>
using namespace std ;

void changeA(int &b){
b=28;
cout<< b<<endl;

}

int main(){
    // int a=10;
    // int &b=a;  // here b is the refernce variable , it does occupy seperate space in the memory a and b both points to the same location
    // b=25;

    int a=10;
    changeA(a);
    cout<<a<<endl;

}