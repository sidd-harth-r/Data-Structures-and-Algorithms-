// 1. 
// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         ListNode*temp1=headA;
//         ListNode*temp2=headB;

//         while(temp1!=NULL){
//             while(temp2!=NULL){
//                 if(temp1==temp2)  return temp1;
//                 temp2=temp2->next;
//             }
//             temp2=headB;
//             temp1=temp1->next;
//         }
//         return NULL;
//     }
// };


//2.

// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
//         ListNode*temp1=headA;
//         ListNode*temp2=headB;
//         int l1=1;
//         int l2=1;

//         while(temp1!=NULL){
//             l1++;
//             temp1=temp1->next;
//         }

//         while(temp2!=NULL){
//             l2++;
//             temp2=temp2->next;
//         }
//         temp1=headA;
//         temp2=headB;
//         if(l1<l2){
//             for(int i=1;i<=l2-l1;i++){
//                 temp2=temp2->next;
//             }
//         }
//         else if(l2<l1){
//               for(int i=1;i<=l1-l2;i++){
//                 temp1=temp1->next;
//             }

//         }
//         while(temp2!=NULL && temp1!=NULL){
//             if(temp1==temp2)  return temp1;
//                 temp1=temp1->next;
//                  temp2=temp2->next;

//         }
        
// return NULL;
//     }
// };