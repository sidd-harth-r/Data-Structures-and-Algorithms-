#include<iostream>
using namespace std;

const int MOD= 1e9+7;
long long power(int a ,long long  b){
    if(b==0)  return 1;


long long halfpower=power(a,b/2);

if(b%2==0)  return (halfpower*halfpower)%MOD;
else return (halfpower*halfpower*a)%MOD;
}



    int countGoodNumbers(long long n) {
       if(n%2==0) {
       return (power(5,n/2)*power(4,n/2) )%MOD;
       }
 else {
       return (power(5,(n+1)/2)*power(4,n/2) )%MOD;
       }
    }


    int main(){

        cout<<countGoodNumbers(4);
        return 0;
    }