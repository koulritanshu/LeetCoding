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
//     bool isPalindrome(ListNode* head) {
//         if(head==NULL||head->next==NULL) return true;
//         if(head->next->next==NULL){
//             if(head->val==head->next->val) return true;
//             else return false;
//         }
//         ListNode*temp = head;
//         int size = 0;
//         while(temp!=NULL){
//             size++;
//             temp=temp->next;
//         }
//         ListNode*pre = NULL;
//         ListNode*curr = head;
//         ListNode*nex = curr->next;
//         for(int i=0;i<size/2;i++){
//             curr->next = pre;
//             pre = curr;
//             curr = nex;
//             nex = nex->next;
//         }
//         if(size%2==1) curr = curr->next;
//         while(curr!=NULL && pre!=NULL){
//             if(pre->val != curr->val) return false;
//             pre = pre->next;
//             curr = curr->next;
//         }
//         return true;
//     }
// };