#include<iostream>
using namespace std ;

long int dectobin(int x){
    int bin=0;
    int pow =1;
    while (x!=0){
        int rem =x%2;
        bin=bin+rem*pow;
        pow*=10;
        x=x/2 ;
    }
    return bin;
}

int main(){
    int dec;
    cout<<"enter the decimal number to convert : \n";
    cin>>dec;
    cout<<"the binary equivalent of the decimal number is : "<<dectobin(dec)<<endl;
    return 0;
}