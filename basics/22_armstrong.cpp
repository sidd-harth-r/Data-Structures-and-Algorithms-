#include<iostream>
#include<cmath>
using namespace std ;
int main(){
    int num,sum=0,rem;
    cout<<"enter the number\n";
    cin>>num;
    int originalnumber =num;
    while(num!=0){
    rem = num%10;
    sum+=pow(rem,3);
    num=(num/10);
    }
    if (originalnumber==sum){
        cout<<"it is an armstrong number\n";
    }
    else 
    cout<<"it is not an armstrong number\n";
    return 0;
}