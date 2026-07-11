#include<iostream>  
using namespace std ;
int exp(int x,int n){
    int ans=1;
    while(n!=0){
        if(n&1){
            ans*=x;
        }
        x*=x;
        n=n>>1;
    }
    return ans;
}

int main(){
cout<<exp(3,4);
return 0;

}