// waf to update the ith bit in a number according to given value (0 or 1)

#include<iostream>  
using namespace std ;

int update_bit(int num,int i,int value ){
  num = num & (~(1<<i)) ;

    return num | (value<<i);
}

int main(){

cout<<update_bit(7,2,0)<<endl;;
cout<<update_bit(7,3,1);
return 0;

}
