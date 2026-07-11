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

int helper(int key,Node*temp,int count){
    
  if(temp==NULL){
    cout<<"element not found\n";
    return -1;
  }

if(temp->data==key) return count;

return helper(key ,temp->next,count+1);



}

int recursive_Search(int key)
{
   return  helper(key,head,0);
}
};



int main(){
    List ll;
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_back(4);

cout<<ll.recursive_Search(4);


    return 0;
}

