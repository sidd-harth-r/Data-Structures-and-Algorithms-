// break statement ia used to break the loop 
// continue statement is used to skip that particular iteration while the rest of the loop remains as it is 

#include<iostream>
using namespace std ;
int main(){
    // int i=1;
    // while(i<=10){
    //     if(i==7){
    //         i++;
    // continue;               //       break;
    //     }
    //     cout<<i<<" ";
    //     i++;
    // }


    // wap where user can keep entering numbers till they enter a multiple of 10
    int num;
    cout<<"enter multiple of 10 to exit \n";
    
    while(1){
      cout<<"enter number\n";
    cin>>num; 
    if(num%10==0)  {
        break;
    
    }
    cout<<"you entered : "<<num<<endl;
}

}