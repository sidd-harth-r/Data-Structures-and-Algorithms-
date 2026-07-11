#include<iostream>
using namespace std ;

int main(){
    int age ;
    cout<<"enter the age to check "<<endl;
    cin>>age;
    
    if (age >=18){
        cout<<"the person can vote "<<endl;
    }
    else {
        cout<<"the person cannot vote"<<endl;
    }
    return 0;
}