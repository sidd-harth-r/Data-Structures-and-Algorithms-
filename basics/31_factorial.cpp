#include<iostream>
using namespace std ;
int main(){
    int n,fact=1;
    cout<<"enter the number \n";
    cin>>n;
    for(int i=n;i>1;i--){
        fact*=i;
    }
    cout<<"the factorial of the entered number is : "<<fact<<endl;
    
}