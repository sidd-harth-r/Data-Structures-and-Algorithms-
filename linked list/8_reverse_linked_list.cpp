#include<iostream>
using namespace std ;

class Node{

    public:
    int data ;
    Node*next;

    Node(int value){
data =value;
next=   NULL;
    }


};

class List{
    Node *head ;
    Node *tail;
public: 
List (){
    head =NULL;
    tail=NULL;
}

void push_back(int value){
    Node*newNode=new Node(value);

    if(head ==NULL){
        head=tail=newNode;
    }
    else{
        tail->next=newNode;
        tail=newNode;
    }
}

void reverseList(){
    Node*cur=head;
    Node*prev =NULL;
  

    while(cur!=NULL){
       Node* Next =cur->next;
        cur->next=prev ;
        prev =cur;
        cur=Next;

    }
    head =prev ;
}
    void printList(){
        Node*temp=head;
        while(temp!=NULL) {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }

    int nth_node_from_last(int n){
        int length=0;
        Node*temp=head;
        while(temp!=NULL){
           temp= temp->next;
           length++;
        }
        temp=head;

    for(int i=0;i<(length-n );i++){
        temp=temp->next;
        
    }
    Node*temp2=temp->next;
    temp->next=temp2;
    delete temp2;
    

    }

  


};


int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);

   ll.reverseList();
   ll.printList();
   return 0;


}