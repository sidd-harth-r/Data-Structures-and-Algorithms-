#include<iostream>  
using namespace std ;

int get_ith_bit(int num,int i){
    
    int pow=1;
    for (int j=0;j<i;j++){
      
      pow*=2;  
    }
    if(num & pow){
        return 1;
    }
else 
    return 0 ; 
}

int get_ith_bit2(int num,int i){
    
  return ((num & (1<<i))>0 ? 1:0);
}


int main(){
 cout<<get_ith_bit2(6, 2);
return 0;

}
