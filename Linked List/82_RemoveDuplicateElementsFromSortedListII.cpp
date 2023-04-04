// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
//     Solution(){
//         ios_base::sync_with_stdio(false);
//         cin.tie(nullptr);
//         cout.tie(nullptr);
//     }
//     ListNode* deleteDuplicates(ListNode* head) {
//         if(head==NULL||head->next==NULL) return head;
//         ListNode*answer = new ListNode();
//         ListNode*dummy = answer;
//         ListNode*previous = new ListNode(1000);
//         ListNode*current = head;
//         ListNode*next = current->next;
//         while(current!=NULL){
//             if(current->val != previous->val){
//                 if(next==NULL){
//                     dummy->next = current;
//                     dummy = dummy->next;
//                 }
//                 else if(current->val!=next->val)
//                 {    
//                     dummy->next = current;
//                     dummy = dummy->next;
//                 }
//             }
//             previous = current;
//             current = next;
//             if(next!=NULL){
//                 next = next->next;
//             }
//         }
//         dummy->next = NULL;
//         return answer->next;
//     }
// };