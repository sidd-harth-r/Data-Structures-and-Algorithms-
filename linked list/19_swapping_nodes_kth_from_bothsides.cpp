 
// class Solution {
// public:
//     ListNode* swapNodes(ListNode* head, int k) {
//         if(head->next==NULL)return head ;
//         ListNode*first=head;
//         ListNode*second=head;

//         for(int i=1;i<k;i++){
//             first=first->next;
//         }
//         ListNode*temp=first->next;

//         while(temp!=NULL){
//             second =second->next;
//             temp =temp->next;
//         }
//        int t=first->val;
//        first->val=second->val;
//        second->val=t;
//        return head;
//     }
// };