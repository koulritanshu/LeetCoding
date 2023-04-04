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
//     ListNode* reverseBetween(ListNode* head, int left, int right) {
//         if(left==right) return head;
//         if(left == 1){
//             int i = 1;
//             ListNode*previous = head;
//             ListNode*current = previous->next;
//             ListNode*next = current->next;
//             while(i<right){
//                 current->next = previous;
//                 previous = current;
//                 current = next;
//                 if(next!=NULL){
//                     next = next->next;
//                 }
//                 i++;
//             }   
//             head->next = current;
//             head = previous;
//             return head;
//         }
//         else{
//             ListNode*temp = head;
//             ListNode*first = NULL;
//             int i = 1;
//             while(i<left){
//                 first = temp;
//                 if(temp!=NULL)temp = temp->next;
//                 i++;
//             }
//             ListNode*first2;
//             while(i<right){
//                 temp = temp->next;
//                 i++;
//             }
//             first2 = temp;
//             ListNode*second = first->next;
//             ListNode*second2 = first2->next;
//             ListNode*previous = first->next;
//             ListNode*current = previous->next;
//             ListNode*next = current->next;
//             i = left;
//             while(i<right){
//                 current->next = previous;
//                 previous = current;
//                 current = next;
//                 if(next!=NULL){
//                     next = next->next;
//                 }
//                 i++;
//             }
//             first->next = first2;
//             second->next = second2;
//             return head;
//         }
//     }
// };