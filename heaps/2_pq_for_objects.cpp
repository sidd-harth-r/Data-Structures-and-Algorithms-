#include<iostream>
#include<queue>
#include<string>

using namespace std ;

class Student{
    public : 
    string name ;
    int marks;

    Student(string name,int marks){
        this->marks=marks;
        this->name=name;
    }

    bool operator < (const Student & other)const{
        return this->marks < other.marks;  // this assigns lower priority the objects with lower marks (max heap)
    }
};


int main(){
    priority_queue<Student>pq;
    pq.push(Student("aman",85));
    pq.push(Student("ben",95));
    pq.push(Student("charles",55));

    while(!pq.empty()){
        cout<<pq.top().name<<"="<<pq.top().marks<<endl;
        pq.pop();

    }
    return 0;
}