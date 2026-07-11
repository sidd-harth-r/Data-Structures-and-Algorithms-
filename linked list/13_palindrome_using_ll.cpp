
// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         ListNode*slow=head;
//         ListNode*fast=head;
       

        
  

//   while(fast!=NULL && fast->next!=NULL){
   
//     fast =fast->next->next;
//     slow=slow->next;
    
//   }
//   ListNode*prev=NULL;
//   ListNode*cur=head;
//   while(cur!=slow){
//     ListNode*Next=cur->next;
//     cur->next=prev;
//     prev=cur;
//     cur=Next;
//   }
//  if(fast==NULL){
 

//     while(slow!=NULL){
//         if(slow->val !=  prev->val ) return false;
//         slow=slow->next;
//         prev=prev->next;
//     }
//     return true;
//  }
//  else {

//     slow=slow->next;
//     while(slow!=NULL){
//         if(slow->val !=  prev->val ) return false;
//         slow=slow->next;
//         prev=prev->next;
//     }
//     return true;
//  }

//     }
// };