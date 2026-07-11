#include<iostream>

using namespace std ;

template<class T>
class Node{
    public: 
T data ;
Node<T>* next;


Node(T value){
    
    data =value ;
    next=NULL;
}

};

template<class T>
class Stack {
    public :

    Node<T>*head;
    public:
    Stack(){
        head=NULL;
    }

    void push(T value){
        Node<T>*newNode=new Node<T>(value);
        if(head==NULL){
            head=newNode;

        }
        else {
            newNode->next=head;
            head=newNode;
        }
    }

    void pop(){
        Node<T>*temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }

    T top(){
        return head->data;
    }

    bool is_empty(){
        return (head ==NULL);
    }

};



int main(){

    Stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    while(s.is_empty()==false){
        cout<<s.top()<<" ";
        s.pop();
    }

}