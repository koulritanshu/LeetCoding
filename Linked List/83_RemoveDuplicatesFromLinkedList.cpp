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
//         if(head==NULL || head->next == NULL) return head;
//         ListNode*temp = head->next;
//         ListNode*previous = head;
//         while(temp!=NULL){
//             if(temp->val == previous->val){
//                 if(temp==NULL){
//                     previous->next = NULL;
//                     break;
//                 }
//                 else{
//                     temp = temp->next;
//                 }
//             }
//             else{
//                 previous->next = temp;
//                 previous = previous->next;
//                 if(temp==NULL){
//                     previous->next = NULL;
//                     break;
//                 }
//             }
//         }
//         previous->next = NULL;
//         return head;
//     }
// };