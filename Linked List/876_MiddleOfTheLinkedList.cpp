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
//     ListNode* middleNode(ListNode* head) {
//         ListNode* temp = head;
//         int size = 0;
//         while(temp!=NULL){
//             size++;
//             temp = temp->next;
//         }
//         size /= 2;
//         temp = head;
//         int i = 0;
//         while(i!=size){
//             temp = temp->next;
//             i++;
//         }
//         return temp;
//     }
// };