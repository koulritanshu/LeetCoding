// // /**
// //  * Definition for singly-linked list.
// //  * struct ListNode {
// //  *     int val;
// //  *     ListNode *next;
// //  *     ListNode() : val(0), next(nullptr) {}
// //  *     ListNode(int x) : val(x), next(nullptr) {}
// //  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
// //  * };
// //  */
// // class Solution {
// // public:
// //     Solution(){
// //         ios_base::sync_with_stdio(false);
// //         cin.tie(nullptr);
// //         cout.tie(nullptr);
// //     }
// //     ListNode* swapNodes(ListNode* head, int k) {
// //         if(head->next == NULL){
// //             return head;
// //         }
// //         if(k == 1){
// //             ListNode*x1 = head;
// //             ListNode*temp = head;
// //             while(temp->next!=NULL) temp=temp->next;
// //             int x = x1->val;
// //             x1->val = temp->val;
// //             temp->val = x;
// //             return head;
// //         }
// //         int size = 1;
// //         ListNode*temp = head;
// //         ListNode*first = new ListNode();
// //         while(temp!=NULL){
// //             size++;
// //             temp=temp->next;
// //             if(size == k){
// //                 first->next = temp;
// //                 first = first->next;
// //             }
// //         }
// //         int fromEnd = size - k;
// //         temp = head;
// //         int i = 1;
// //         while (i != fromEnd){
// //             temp = temp->next;
// //             i++;
// //         }
// //         int x = first->val;
// //         first->val = temp->val;
// //         temp->val = x;
// //         return head;
// //     }
// // };

// // BETTER APPROACH

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
//     ListNode* swapNodes(ListNode* head, int k) {
//         if(head->next==NULL) return head;
//         int i = 1;
//         ListNode*temp=head;
//         while(i!=k){
//             i++;
//             temp=temp->next;
//         }
//         ListNode*first = temp;
//         ListNode*temp2 = head;
//         while(temp->next!=NULL){
//             temp=temp->next;
//             temp2=temp2->next;
//         }
//         int x = first->val;
//         first->val=temp2->val;
//         temp2->val=x;
//         return head;
//     }
// };