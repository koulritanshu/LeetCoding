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
//     ListNode* removeNodes(ListNode* head) {
//         ListNode*temp = head;
//         stack<int> s;
//         while(temp!=NULL){
//             while(!s.empty() && temp->val > s.top()){
//                 s.pop();
//             }
//             s.push(temp->val);
//             temp = temp->next;
//         }
//         ListNode* t = NULL;
//         while(!s.empty()){
//             ListNode*temp = new ListNode(s.top());
//             s.pop();
//             if(t != NULL){
//                 temp->next = t;
//             }
//             t = temp;
//         }
//         return t;
//     }
// };