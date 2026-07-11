#include<iostream>
using namespace std;
int main(){
    int option,a,b;
    cout<<"enter the two numbers \n";
    cin>>a>>b;
    cout<<"1.addition\n2.substraction\n3.mutltipliction\n4.division\nEnter your option\n";
    cin>>option;
    switch(option){
        case 1: cout<<"the sum of the numbers is : "<<a+b<<endl;
        break;
       case 2: cout<<"the difference of the numbers is : "<<a-b<<endl;
        break;
        case 3: cout<<"the product of the numbers is : "<<a*b<<endl;
        break;
        case 4: cout<<"the division  of the numbers is : "<<a/b<<endl;
        break;
        default : cout<<"enter a valid option ";
    }
}