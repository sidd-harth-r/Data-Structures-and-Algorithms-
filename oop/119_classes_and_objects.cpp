#include<iostream>
#include<string>

using namespace std;

class Student{
    string name;

    public:
    float cgpa ;
    int id ;

    void getPercentage(){
        cout<<cgpa*10<<endl;
    }
};

int main(){
    Student s1;
    s1.cgpa=9;
    s1.getPercentage();
    return 0;
}
