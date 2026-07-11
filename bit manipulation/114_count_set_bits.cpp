#include<iostream>  
using namespace std ;

int count_set_bits(int num){
    int count =0;
    while(num!=0){
        int last_digit =(num & 1);
   count+=last_digit;
   num=num>>1;
    }
return count;
}

int main(){

  cout<<count_set_bits(10);
return 0;

}
