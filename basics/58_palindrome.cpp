// A number is called if number is equal to reverse number 


#include<iostream>
using namespace std ;



int revNum(int x){
     int rev=0;
while (x!=0){
    int rem =x%10;
   
    rev=(rev*10)+rem;
    x=x/10 ;
}
return rev ;
}

bool ispalindrome(int x){
    
    if (x==revNum(x)){
        return 1 ;
    }
    else {
        return 0 ;
    }
    

    
}

int main(){
    int x;
    cout<<"enter the number \n";
    cin>>x;
    if(ispalindrome(x)){
        cout<<"the number is a palindrome \n";
    }
    else {
        cout<<" the number is NOT a palindrome \n";
    }
    return 0;
}