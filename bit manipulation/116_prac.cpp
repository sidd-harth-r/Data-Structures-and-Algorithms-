// waf to clear the range of bits from i to j in a given number .(i and j are counted backwards from the right end of the number )


#include<iostream>  
using namespace std ;

int clear_bits_in_range(int num,int i,int j){
    int mask=(~0<<(j+1))  | (~(~0<<i));
    num =num & mask;
    return num;
}



int main(){
cout<<clear_bits_in_range(31,1,3);
return 0;

}
