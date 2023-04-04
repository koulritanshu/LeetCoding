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
//         cout.tie(nullptr);
//         cin.tie(nullptr);
//     }
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         if(head->next == NULL) return NULL;
//         int size = 0;
//         ListNode*temp = head;
//         while(temp!=NULL){
//             temp = temp->next;
//             size++;
//         }
//         int fromStart = size - n + 1;
//         if(fromStart==1) return head->next;
//         int i = 1;
//         ListNode*temp1 = head;
//         ListNode*temp2 = head;
//         while(i!=fromStart){
//             temp2 = temp1;
//             temp1=temp1->next;
//             i++;
//         }
//         temp2->next = temp1->next;
//         return head;
//     }
// };