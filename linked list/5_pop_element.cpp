#include<iostream>
using namespace std ;

class Node{
    public:
    int data ;
    Node*next;
     
    Node(int value){
     data=value;
     next=NULL;
    }


};

class List{
  Node*head;
  Node*tail;

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


    void printList(){
        if(head==NULL){
            cout<<"linked list is empty\n";
            return ;
        }
        Node*temp=head;
        while(temp!=NULL) {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL";
    }

    void pop_front(){
   if(head==NULL){
        cout<<"linked list is empty\n";
            return ;

    }
        Node*temp=head;

        head =head->next;
        temp->next=NULL;
        delete temp;

    }

    void pop_back(){
        if(head==NULL){
            cout<<"linked list is empty\n";
            return ;
        
    }
    Node*temp=head;

    while(temp->next->next!=NULL){
          temp=temp->next;
    }

 temp->next=NULL;
 delete tail;
 tail=temp;


}

     void insert_at_middle(int val,int pos ){
        int count =0;
    Node*temp=head;
    
         Node*newNode=new Node(val);
    for(int i=0;i<pos-1;i++){
        if(temp==NULL){
            cout<<"invalid";
            return ;
        }
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
        
    }



};



int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.pop_back();
   
    ll.printList();
    return 0;

}




