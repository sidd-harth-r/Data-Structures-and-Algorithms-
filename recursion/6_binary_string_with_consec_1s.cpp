// print all binary strings of size n without  any consecutive 1's 

#include<iostream>  
using namespace std ;

void print_bin_strings(int n , string ans,int lastdigit){

    if(n==0) {
         cout<<ans<<endl;
         return ;
    }

if(lastdigit!=1){
     print_bin_strings(n-1,ans+"0",0);
      print_bin_strings(n-1,ans+"1",1);
}

    else{
         print_bin_strings(n-1,ans+"0",0);
    }
}



int main(){
 print_bin_strings(3,"",0);
return 0;

}
