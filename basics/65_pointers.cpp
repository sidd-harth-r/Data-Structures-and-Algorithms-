// pointers are special variables that store the address of another variable 
#include<iostream> 
using namespace std ;

int main(){
    int a=10;
    int *ptr =&a;
    float pi=3.14;
    float* ptr2=&pi;

    int** pptr =&ptr ;  // it is pointer to pointer 

    cout<<&a<<" = "<<ptr<<endl;
    cout<<&pi<<" = "<<ptr2<<endl;
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(ptr2)<<endl;
}