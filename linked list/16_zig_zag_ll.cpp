#include<iostream>
using namespace std ;

class Node{
    public:
    int data;
      Node*next;
      Node(int value){
    data =value;
    next=NULL;
      }
};

class List {
    public:
    Node*head;
    Node*tail ;
    List(){
        head=NULL;
        tail=NULL;

    }

    void push_back(int value){
   Node*newNode=new Node(value);

   if(head==NULL){
    head =tail=newNode;
   }
   else {
    tail->next=newNode;
    tail=newNode ;

   }
    }   
};

void printList(Node*head){

    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

Node* splitAtMid(Node*head){
    Node*slow=head ;
    Node*fast=head ;
    Node*prev=NULL;

    while(fast!=NULL  && fast->next!=NULL){
        prev =slow ;
        slow=slow->next;
        fast=fast->next->next;
    }
    prev->next=NULL;
    return slow ;
}

void alternateMerge(Node*head,Node*righthead){
    Node*temp1=head;
    Node*temp2=righthead;

    while (temp1!=NULL){
        Node *Next1=temp1->next;
       temp1->next=temp2;
       temp1=Next1;

       if(temp1!=NULL){
         Node*Next2=temp2->next;
         temp2->next=temp1;
         temp2=Next2;
       }
    }
}

void zigZag(Node *head){
    Node*righthead=splitAtMid(head);

   Node*cur=righthead;
   Node*prev=NULL;

   while(cur!=NULL){
     Node*Next=cur->next;
    cur->next=prev;
    prev =cur ;
    cur=Next;
   }
righthead=prev ;
    
alternateMerge(head,righthead);

}


int main(){
    List ll;

    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
   ll.push_back(5);

    printList(ll.head);
    zigZag(ll.head);
    printList(ll.head);
 
    


    return 0;
}