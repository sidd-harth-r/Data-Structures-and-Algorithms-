#include<iostream>  
using namespace std ;

int friend_pairing(int n){
    if(n==1 || n==2) return n;
    return friend_pairing( n-1) + friend_pairing(n-2)*(n-1)  ;
}

int main(){
    cout<<friend_pairing(10);

return 0;

}
