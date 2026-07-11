// 1. waf to find the product of two numbers .
// 2 waf to find whether a number is odd or even.
#include<iostream>
using namespace std ;

int product(int a ,int b){
    
    return a*b;
}

void oddoreven(int a){
    if(a%2==0){
        cout<<"the entered number is even\n";
    }
    else{
        cout<<"the entered number is odd \n";
    }
    
}

int main(){
    int a,b;
    cout<<"the two numbers to calculate the product : \n";
    cin>>a>>b;
  int n=product(a,b);
  cout<<"the product of two numbers is : "<<n<<endl;

    int c;
    cout<<"enter the number to check whether its odd or even \n";
    cin>>c;
    oddoreven(c);

}