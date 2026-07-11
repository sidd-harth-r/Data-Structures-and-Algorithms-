#include<iostream>  
using namespace std ;


int main(){
    int num;
    cout<<"Enter the number :"<<endl;
    cin>>num;
    if((num&1)==0){
        cout<<"Even"<<endl;
    }
    else{
        cout<<"Odd"<<endl;
    }

return 0;

}
