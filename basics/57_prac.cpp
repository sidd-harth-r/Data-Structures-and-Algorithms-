// print all primes in range from 2 to n

#include<iostream>
#include<cmath>

using namespace std ;

bool isprime(int x){
    if (x==1){
        return 0;
    }

    for(int i=2;i<=sqrt(x);i++){
        if(x%2==0){
            return 0;
            break ;
        }
    }
    return 1;
}

void allPrime(int n){
    cout<<"all the primes in the given range are : ";
    for (int i=2;i<=n;i++){
        if (isprime(i)){
            cout<<i<<" ";
        }
    }

}

int main(){
    int n;
    cout<<"enter the value of n \n";
    cin>>n;
 allPrime(n);
    return 0;
}


