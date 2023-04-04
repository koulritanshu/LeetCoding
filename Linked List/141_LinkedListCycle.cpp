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
//     bool hasCycle(ListNode *head) {
//         // First Approach: Using O(N) space
//         // Create map and if Node appears again return else return false
//         // Second Approach: Using Floyd's Hare and Tortoise Method
//         ListNode*fast = head;
//         ListNode*slow = head;
//         while(fast!=NULL&&fast->next!=NULL){
//             fast = fast->next->next;
//             slow = slow->next;
//             if(fast==slow){
//                 return true;
//             }
//         }
//         return false;
//     }
// };