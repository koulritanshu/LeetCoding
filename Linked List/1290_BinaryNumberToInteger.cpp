/*
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode() : val(0), next(nullptr) {}
*     ListNode(int x) : val(x), next(nullptr) {}
*     ListNode(int x, ListNode *next) : val(x), next(next) {}
* };
*/
// class Solution {
// public:
//     Solution(){
//         ios_base::sync_with_stdio(false);
//         cin.tie(nullptr);
//         cout.tie(nullptr);
//     }
//     int getDecimalValue(ListNode* head) {
//         int size = 0;
//         ListNode*temp = head;
//         while(temp!=NULL){
//             size++;
//             temp = temp->next;
//         }
//         temp = head;
//         long long ans = 0;
//         while(size){
//             ans += ((long long)1<<(long long)(size-1))*(temp->val);
//             temp = temp->next;
//             size--;
//         }
//         return ans;
//     }
// };