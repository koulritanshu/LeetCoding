// // /**
// //  * Definition for singly-linked list.
// //  * struct ListNode {
// //  *     int val;
// //  *     ListNode *next;
// //  *     ListNode(int x) : val(x), next(NULL) {}
// //  * };
// //  */
// // class Solution {
// // public:
// //     Solution(){
// //         ios_base::sync_with_stdio(false);
// //         cin.tie(nullptr);
// //         cout.tie(nullptr);
// //     }
// //     void deleteNode(ListNode* node) {
// //         ListNode* head = node;
// //         while(head->next->next!=NULL){
// //             head->val = head->next->val;
// //             head = head->next;
// //         }
// //         head->val = head->next->val;
// //         head->next = NULL;
// //     }
// // };


// // BETTER APPROACH

// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     Solution(){
//         ios_base::sync_with_stdio(false);
//         cin.tie(nullptr);
//         cout.tie(nullptr);
//     }
//     void deleteNode(ListNode* node) {
//         int temp = node->next->val;
//         node->val = temp;
//         node->next = node->next->next;
//     }   
// };