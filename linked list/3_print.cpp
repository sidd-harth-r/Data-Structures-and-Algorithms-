#include<iostream>
using namespace std ;

class Node {
    public :
    int data ;
    Node* next;

    Node(int value){
        data =value;
        next=NULL;
    }
};

class List {
    Node*head ;
    Node*tail;
    public :
    List(){
        head =NULL;
        tail=NULL;
    }

    void push_front(int value){
        Node*newNode=new Node(value);
        if(head ==NULL){
            head=tail=newNode;

        }
        else{
            newNode->next=head ;
            head =newNode;
        }
    }

    void push_back(int value){
        Node*newNode=new Node(value);
        if(head ==NULL){
            head =tail =newNode;

        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }

    void printList(){
        Node*temp=head;
        while(temp!=NULL) {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }

};

int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.printList();
    return 0;

}
