#include<iostream>
using namespace std ;

int main(){
    int year ; 
    cout<<"enter the year\n";
    cin>>year;

    if(((year%4)==0 && (year%100)!=0) || ((year%400)==0)){
        cout<<"its is a leap year \n";
    }
    else 
    cout<<"its is not a leap year \n"; 
    return 0;
}