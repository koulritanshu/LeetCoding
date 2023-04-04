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