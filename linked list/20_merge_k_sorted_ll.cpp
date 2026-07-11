// class Solution {
// public:
//     ListNode* mergeKLists(vector<ListNode*>& lists) {
//         ListNode*dummy=new ListNode(-1);
//         ListNode*temp=dummy;
   
//            while(1){
//             int pos=-1;
       
          
//             int mini=INT_MAX;
//         for(int i=0;i<lists.size();i++){
          
//             if(lists[i]==NULL){
               
//                 continue;
//             }

//             if((lists[i]->val)<mini){
//                 mini=lists[i]->val;
//                 pos=i;
//             }
           
//         }
//         if(pos==-1) break;
//         temp->next=lists[pos];
//         temp=temp->next;
//         if(lists[pos])
//         lists[pos]=lists[pos]->next;
//         }
//         return dummy->next;
//     }
// };