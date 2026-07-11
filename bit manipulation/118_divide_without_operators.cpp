#include<iostream>  
#include<climits>

using namespace std ;

int divide_without_operator1(int dividend ,int divisor){
    long long a =abs((long long )dividend);
    long long b = abs((long long )divisor);
    
    long long count=0;
    bool sign =true;
    if(dividend >0 && divisor <0) sign =false ;
    if(dividend <0 && divisor >0) sign =false ;



    while(b<=a){
    a-=b ;
        count++;
    }
    if(count > INT_MAX) return (sign ? INT_MAX : INT_MIN);

return( sign==false ? (-1)*count: count);
}

int main(){
cout<< divide_without_operator1(10,3);

return 0;

}
