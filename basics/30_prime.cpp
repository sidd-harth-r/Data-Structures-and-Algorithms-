#include<iostream>
#include<cmath>

using namespace std ;
int main(){
    bool isprime =true ;
    int num;
    cout<<"enter a number to check whether it is a prime or not \n";
    cin>>num ;
    for (int i=2 ;i<=sqrt(num);i++){
        if (num%i==0){
            isprime =false;
            break;
        }

    }
    if(isprime){
        cout<<"the entered number is a prime number \n";
    }
    else 
    cout<<"the entered number is NOT a prime number \n";
    
}