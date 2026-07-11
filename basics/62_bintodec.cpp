#include<iostream>
#include<cmath>

using namespace std ;

int bintodec(long int x){
int decimal=0;
int i=0;
while(x!=0){
    int rem =x%10;
    decimal+=rem*pow(2,i);
    i++;
    x=x/10;
}
return decimal ;
}

int main(){
   long int x;
    cout<<"enter the binary number \n";
    cin>>x;
    cout<<"the decimal equivalent of the entered binary number is : "<<bintodec(x)<<endl;
    return 0;
}