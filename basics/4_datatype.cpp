// there are two types datatypes in cpp which are primitive and non primitive datactypes 
/*
1 integer (int)                                          
2 character (char)
3 boolean (bool)
4 flaoting point (flaot)
5 double floating point (double)  - double has more precision than floating point 
*/

// note that cout had precision of 5 that i can print only it only print 5 numbers after the decimal , it can be increased by using the function set precision which is present in iomanip

#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int age =25;
    char grade='A';
    bool isAdult = true ;
    float cgpa =9.123456789;
    double cgpa1 =9.123456789;

    cout<<age<<" "<<grade<<" "<<isAdult<<" "<<cgpa<<endl;
    cout<<setprecision(12)<<"the value of cg in float is : "<<cgpa<<endl;
    cout<<setprecision(12)<<"the value of cg in double  is : "<<cgpa1<<endl;


    cout<<"the size of integer is : "<<sizeof(int)<<endl;
    cout<<"the size of flaoating point number  is : "<<sizeof(float)<<endl;
    cout<<"the size of character  is : "<<sizeof(char)<<endl;
    cout<<"the size of double flaoting point integer is : "<<sizeof(double)<<endl;
    cout<<"the size of boolean is : "<<sizeof(bool)<<endl;
}