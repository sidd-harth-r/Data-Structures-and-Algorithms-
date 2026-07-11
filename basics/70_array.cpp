// linear collection of sametype of elements that are stored together in a contiguous memory spaces 
#include<iostream>
using namespace std ;

int main(){
    // int marks[50];  // in an unintialised array all elements are initialised to garbage value 
    //    int marks[50]={1,2,3} ;  // in a partially initialsed array all the unitailsed elements are intislised to 0
       int marks[]={1,2,3};  // if we are not mentioning size it is mandatory to initialie the array and the array size is assumed to be same as the number of initailised elements 
    int n = sizeof(marks)/sizeof(int) ; // method to calculate the length of the array 
cout<<marks[0]<<endl;
cout<<marks[1]<<endl;
cout<<marks[2]<<endl;
cout<<"the length of the array is : " <<n<<endl;

return 0;

}