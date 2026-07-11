#include<iostream>
using namespace std ;
int main(){
    int num,sum=0 ;
    cout<<"enter the number \n";
    cin>>num;
    while(num!=0){
        
   int rem =num%10;
   sum+=rem ;
   num/=10;
    }
    cout<<"the sum of digits of the numbers are : "<<sum<<endl;
}