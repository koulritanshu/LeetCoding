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
//     ListNode* reverseList(ListNode* head) {
//         if(head==NULL) return head;
//         else if(head->next==NULL) return head;
//         ListNode* previous = NULL;
//         ListNode* current = head;
//         ListNode* next = current->next;
//         ListNode* tail = NULL;
//         while(current!=NULL){
//             current->next = previous;
//             previous = current;
//             current = next;
//             if(next!=NULL){
//                 next=next->next;
//             }
//             if(current!=NULL){
//                 tail = current;
//             }
//         }
//         head = tail;
//         return head;
//     }
// };