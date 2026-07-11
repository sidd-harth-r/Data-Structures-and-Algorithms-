// array name is a constant pointer 


// 1. increment or decrement operator 
// ++ptr or ptr++ 
// --ptr or ptr--
// size of the datatype it is pointing to gets added or subtracted 


// 2. adding and substracting contants like ptr +3  or ptr -3   which nothing but ptr =ptr(+/-)3*sizeof(datatype that the pointer is pointing to)
// these operations are genrally using the case of arrays using (arr+i)

// 3. addition of pointers in invalid whereas subtraction of pointers is not (condition for sunstracting both the pointers is that both should be of the same type )// sunstrav
// sunstraction of pointers gives the numeber of elements of the particular type is present between both the poiters 


// 4. comparision of pointers ptr2>ptr , ptr<ptr2 ,ptr==ptr2


#include<iostream>
using namespace std ;

void printArr(int *ptr,int n){
    for(int i=0;i<n;i++){
        cout<<*(ptr+i)<<" ";
    }
}

int main(){
    int a=10;
    int *ptr=&a;
    int *ptr2 =ptr+3;
    cout<<ptr2-ptr<<endl;   // gives 3 as the output as 3 integers can be stored between ptr and ptr2
    // cout<<ptr<<endl;    // prints  0x61ff08
    // cout<<++ptr<<endl;  // prints 0x61ff0c      ptr =ptr+1*sizeof(datatype that the pointer is pointing to)

//     int arr[]={1,2,3,4,5,6};
//     int n = sizeof(arr)/sizeof(int);
//     printArr(arr,n);
return 0;

}