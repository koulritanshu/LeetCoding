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
//     ListNode* oddEvenList(ListNode* head) {
//         if(head == NULL||head->next==NULL||head->next->next==NULL) return head;
//         ListNode* odd = head;
//         ListNode*firstEven = head->next;
//         ListNode*even = head->next;
//         ListNode*temp = head->next->next;
//         while(temp!=NULL){
//             odd->next = temp;
//             odd=odd->next;
//             temp=temp->next;
//             even->next = temp;
//             even=even->next;
//             if(temp!=NULL)temp=temp->next;
//         }
//         odd->next = firstEven;
//         return head;
//     }
// };