/*

*
* * 
* * *
* * * *

*/
#include<iostream>
using namespace std ;
int n=4;

int main(){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
