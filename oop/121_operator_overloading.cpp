#include<iostream>  
using namespace std ;

class Complex {
    int real;
    int complex;

    public:

    Complex(int r,int i){
        this->real=r;
        this->complex=i;

    }

    void PrintNum(){
        cout<<real<<"+"<<complex<<"i"<<endl;
    }

    Complex operator + (Complex &obj){
        int realVal=this->real+obj.real;
        int complexVal=this->complex+obj.complex;
        Complex c(realVal,complexVal);
        return c;
    }


};


int main(){
    Complex c1(1,2);
    Complex c2(3,4);
  Complex c3=c1+c2;
 c1.PrintNum();
 c2.PrintNum();
  c3.PrintNum();


return 0;

}