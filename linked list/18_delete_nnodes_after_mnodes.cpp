//  leetcode premium

#include<iostream>

using namespace std ;

class Node {
    public : 
    int data ;
    Node*next;

  Node(int value){
    data =value;
    next=NULL;
  }

};

class List {
    public:
    Node* head ;
    Node* tail;
    List(){
     head =NULL;
     tail=NULL;
    }

     void printList(){
        Node*temp=head;
        while(temp!=NULL) {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;;
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

};


 Node* Delete_N_NodesAfter_M_Nodes(Node*head ,int m,int n ) {
    Node*fast =head;
    Node*slow=NULL;

    int i;
    int j;
     
   
    while(fast !=NULL ){
        
          i=0;
        while(fast!=NULL && i<m){
            slow=fast;
            fast=fast->next;
            i++;
        }
        if(fast ==NULL) {
            slow->next=NULL;
        break;
        }
            

        j=0;
        while(fast!=NULL  && j<n){
            Node*del=fast;
            fast=fast->next;
            delete del;
            j++;
        }

           slow->next=fast;
           
          
 }

 return head;
 }

 int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_back(5);
    ll.push_back(6);
    ll.push_back(7);
    ll.push_back(8);
  
    ll.printList();
    ll.head=Delete_N_NodesAfter_M_Nodes(ll.head,2,2);
    ll.printList();
    return 0;

 }