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
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         ListNode*ans = new ListNode();
//         ListNode*dummy = ans;
//         if(l1==NULL) return l2;
//         if(l2==NULL) return l1;
//         int carry = 0;
//         while(l1!=NULL&&l2!=NULL){
//             int currentSum = l1->val + l2->val + carry;
//             if(currentSum<=9){
//                 carry = 0;
//                 dummy->next = new ListNode(currentSum);
//             }
//             else{
//                 carry = 1;
//                 dummy->next = new ListNode(currentSum%10);
//             }
//             dummy = dummy->next;
//             l1 = l1->next;
//             l2 = l2->next;
//         }
//         while(l1!=NULL){
//             int currentSum = l1->val+carry;
//             if(currentSum<=9){
//                 carry = 0;
//                 dummy->next = new ListNode(currentSum);
//             }
//             else{
//                 carry = 1;
//                 dummy->next = new ListNode(currentSum%10);
//             }
//             dummy = dummy->next;
//             l1 = l1->next;
//         }
//         while(l2!=NULL){
//             int currentSum = l2->val+carry;
//             if(currentSum<=9){
//                 carry = 0;
//                 dummy->next = new ListNode(currentSum);
//             }
//             else{
//                 carry = 1;
//                 dummy->next = new ListNode(currentSum%10);
//             }
//             dummy = dummy->next;
//             l2 = l2->next;
//         }
//         if(carry==1){
//             dummy->next = new ListNode(1);
//             carry = 0;
//         }
//         return ans->next;
//     }
// };