// print the digits of the given numebr in reverse using while loop

#include<iostream>
using namespace std;

int main(){
    
  /*  int n;
    cout<<"enter the number\n";
    cin>>n;
    while(n!=0){
   int rem = n%10;
   cout<<rem;
   n/=10;  
   } 
   */

   // reverse the gievn number and print the result 
    int n,revnum=0;
    cout<<"enter the number\n";
    cin>>n;

    while(n!=0){
   int rem = n%10;
  revnum= (revnum)*10+rem;
   n/=10;  
   } 

cout<<"the reversed number is : "<<revnum<<endl;

}