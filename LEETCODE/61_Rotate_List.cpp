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
//     ListNode* rotateRight(ListNode* head, int k) {
//         if(head==NULL||head->next==NULL||k==0) return head;
//         int size = 0;
//         ListNode*temp = head;
//         ListNode*end = head;
//         while(temp!=NULL){
//             size++;
//             end = temp;
//             temp = temp->next;
//         }
//         k = k % size;
//         if(k==0) return head;
//         int i = 1;
//         int ending = size - k;
//         end->next = head;
//         temp = head;
//         while(i!=ending){
//             temp=temp->next;
//             i++;
//         }    
//         head = temp->next;
//         temp->next = NULL;
//         return head;
//     }
// };