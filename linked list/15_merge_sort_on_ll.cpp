#include<iostream>
#include<list>
using namespace std ;

class Node{
    public :
    int data ;
    Node*next;
    Node(int value){
        data =value ;
        next =NULL;
    }
};

class List {
    public:

    Node*head ;
    Node*tail;

    List(){
        head =NULL;
        tail =NULL;
    }

    void push_front(int value){
        Node*newNode=new Node(value);
        if(head==NULL){
            head =tail=newNode;
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

    void pop_front(){
        if(head==NULL){
            return ;
        }
        Node*temp=head ;
        head=head->next;
        delete temp;


    }
};

void printList(Node*head){
    Node*temp=head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL";
}

Node* splitAtMid(Node*head){
     Node*slow=head;
    Node*fast=head;
    Node*prev=NULL;

    while(fast !=NULL  && fast ->next!=NULL){
        prev =slow;
        fast =fast->next->next;
        slow=slow->next;
    }
    prev->next =NULL;
    return slow ;
    
}

 Node* merge(Node* left, Node* right) {
        Node*dummy =new Node(-1);
        Node*temp=dummy;
          Node*i= left;
          Node*j= right;

          while(i!=NULL  && j!=NULL){
             if(i->data < j->data){
                temp->next =i;
                i=i->next;
                temp=temp->next;
             }

             else {
                
                temp->next =j;
                j=j->next;
                temp=temp->next;
             
          }
          }

          while(i!=NULL){
            temp->next =i;
            i=i->next;
            temp=temp->next;
          }
  while(j!=NULL){
            temp->next =j;
            j=j->next;
            temp=temp->next;
          }
return dummy->next;
        
    }


Node* mergeSort(Node*head){
    if(head->next ==NULL) return head;

    Node*rightHead=splitAtMid(head);
    Node* left =mergeSort(head);
   Node*right= mergeSort(rightHead);

   return merge(left,right);
}

int main(){
    List ll;

    ll.push_back(1);
    ll.push_back(9);
    ll.push_back(8);
    ll.push_back(4);
    ll.push_back(7);

    printList(ll.head);
    cout<<"\n";

    ll.head=mergeSort(ll.head);
  printList(ll.head);

    return 0;
}