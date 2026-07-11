// typecasting is the conversion of data from one type to another 
// there ae two types of conversion    1. inplicit type conversion  2. explicit type conversion
// implicit type conversions are done by the compiler to avoid data loss
// the hierarchy followed is ------ double > float > int > char > bool
// character A  is stored in the memory as 65 where as a is stored as 97

# include<iostream> 
using namespace std;
int main (){
    /*
    cout<<10/3<<endl;    // gives 3 as the answer
    cout<<10/3.0<<endl; // gives 3.33 as the answer 
    cout<<'A'+1<<endl;  // gives the answer as 66 
    */

    // in explicit type conversion id forced by the preogrammer 
    float PI = 3.14 ;
    cout<<(int)PI<<endl;
    cout<<(float)10/3<<endl;
    cout<<(char)('A'+1)<<endl;
    cout<<bool(3)+2<<endl;   // any non-zero value returns 1 in bool where as only 0 is false(0)
    cout<<23.5+2+'A'<<endl;

}

