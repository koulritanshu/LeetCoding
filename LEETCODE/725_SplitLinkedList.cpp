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
//     vector<ListNode*> splitListToParts(ListNode* head, int k) {
//         int size = 0;
//         ListNode*temp = head;
//         while(temp!=NULL){
//             size++;
//             temp=temp->next;
//         }
//         vector<ListNode*> answer;
//         temp = head;
//         int lengthOfOneNode = size / k;
//         int ExtraNodes = size % k;
//         while(temp){
//             answer.push_back(temp);
//             int currLen = 1;
//             while(currLen < lengthOfOneNode){
//                 temp = temp->next;
//                 currLen++;
//             }
//             if(ExtraNodes > 0 && size > k){
//                 temp = temp->next;
//                 ExtraNodes--;
//             }
//             ListNode*x = temp->next;
//             temp->next = NULL;
//             temp = x;
//         }
//         while(size<k){
//             answer.push_back(NULL);
//             size++;
//         }
//         return answer;
//     }
// };