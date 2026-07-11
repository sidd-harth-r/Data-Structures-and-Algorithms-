#include<iostream>
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

bool isCycle(Node*head){
    Node*fast=head;
    Node*slow=head;
    while(fast!=NULL &&  fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(fast ==slow) return true;
    }
    return false;
}

void removeCycle(Node*head){
    Node*slow=head ;
    Node*fast=head;

    bool cyclefound=false;
    while(fast!=NULL && fast ->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            slow=head;
            cyclefound=true;
            break;
        }
    }

        if(cyclefound==false)  return;

        if(fast==slow ){
            while(fast->next!=slow){
                fast =fast->next;
            }
            fast->next=NULL;
            return ;
        }
        
    
    Node *prev=NULL;
    while(fast !=slow){
        prev =fast ;
        fast =fast->next;
        slow =slow->next;
    }
    prev->next=NULL;
    
}


int main(){
  List ll;  

  ll.push_front(4);
  ll.push_front(3);
  ll.push_front(2);
  ll.push_front(1);

  ll.tail->next=ll.head;
  cout<<isCycle(ll.head)<<endl;;
  removeCycle(ll.head);
  printList(ll.head);
  return 0;


}
