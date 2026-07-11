#include<iostream>
using namespace std ;

int sumofDig(int n){
    int sum=0;
    while (n!=0){
        int rem=n%10;
        sum +=rem ;
        n = n /10 ;
    }
    return sum ;
}

int main(){
    int n; 
    cout <<"enter the number \n";
    cin>>n;
    cout<<"the sum of the digits of the number is : "<<sumofDig(n)<<endl;
    return 0;
}
