#include<iostream>
#include<cmath>

using namespace std;

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

int main(){
    int n;
    cout<<"enter the number \n";
    cin>>n;
    if(isprime(n)){
        cout<<"the entered number is a prime number \n";
    }
    else {
        cout<<"the entered number is NOT prime number \n";
    }
}