#include<iostream>
using namespace std;
int main(){
    float income,tax;
    cout<<"enter the income in lakhs \n";
    cin>>income;

    if(income<5){
        tax =0;
    }
    else if(income>=5 && income <10 )
    {
tax=(income)*0.2;
    }
    else
    tax = (income)*0.3;

    cout<<"the tax payable by the person in lakhs is : "<<tax;
}
