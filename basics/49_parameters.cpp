/*
returntype fname(type par1,type par2...........){
// do some work 
 return value ;

}

*/

#include<iostream>
using namespace std ;

int sum(int a,int b){     // here a and b are parameters
    int sum =a+b;
    return sum ;
}

int difference(int a ,int b=1){    // here b is default parameters which assumes itself to be 1 in the absence of value 
    int diff=a-b;
    return diff;
}



int main(){
    int s =sum (2,4);  // here 2, 4 are arguments
    int r=difference(6);
    cout<<"sum = "<<s<<endl;
    cout<<"difference = "<<r<<endl;
    return 0;

}