// in do while loop work gets done atleast once irrespective of the condition as the condition is checked at the end 
/*
syntax :
do{
-----------
}while(condition);
*/
#include<iostream>
using namespace std ;
int main(){
    int i=1;
    do{
        cout<<i<<" ";
        i++;
    }while(i<=5);
}