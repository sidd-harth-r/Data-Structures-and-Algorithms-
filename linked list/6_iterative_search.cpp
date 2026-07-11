#include<iostream>
using namespace std ;

class Node{
    public:
    int data ;
    Node* next;
    
Node(int value){
    data =value;
    next=NULL;

}
};

class List{
    Node* head ;
    Node* tail;
public:
    List(){
        head=NULL;
        tail=NULL;
    }
    void push_front(int value){
       Node*newNode=new Node(value) ;  //new node is created 
       if(head ==NULL){
        head =tail =newNode;
       }
       else {
       newNode->next=head;
       head =newNode;
       }

    }
    void push_back(int value){
    Node*newNode=new Node(value);
    if(head==NULL){
    
        head=tail=newNode;
        
        
    }
    else {
        tail->next=newNode;
        tail=newNode;
    }
}

int linearSearch(int key)
{
    Node*temp=head;
    int count =0;
    
    while(temp!=NULL)
    {
       if(temp->data == key)  
        {
           return count;   
       }  
       temp=temp->next;
       count++;
    }
    cout<<"element not found \n";
    return -1;
  
}
};



int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(4);

cout<<ll.linearSearch(3);


    return 0;
}

