// print the sum of odd digits of the number using while loop

#include<iostream>
using namespace std ;
int main(){
    int num,sum=0,i=1 ;
    cout<<"enter the number \n";
    cin>>num;
    while(num!=0){
      
   int rem =num%10;
   if(rem%2!=0){
   sum+=rem ;
   }
   num/=10;
   i++;
    }
    cout<<"the sum of odd digits of the number are : "<<sum<<endl;
}