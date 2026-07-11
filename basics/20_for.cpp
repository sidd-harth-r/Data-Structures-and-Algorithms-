// for(initialisation;condition;updation) 
// printing n natural numbers and calculatimg their sum 

#include<iostream>
using namespace std ;
int main(){
    int i,n,sum=0;
    cout<<"enter the value of n \n";
    cin>>n;
    for( i=1 ; i<=n;i++){    // note that if we decalre a variable inside the loop then its scope is limited to th loop itself 
        cout<<i<<" ";
        sum+=i;
    }
    cout<<"\n";
    cout<<"the sum of first n natural numbers is : "<<sum<<endl;
   
    return 0;
}