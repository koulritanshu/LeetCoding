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
//         cin.tie(NULL);
//         cout.tie(NULL);
//     }
//     ListNode* deleteMiddle(ListNode* head) {
//         if(head->next==NULL) return NULL;
//         if(head->next->next==NULL){
//             head->next=NULL;
//             return head;
//         }
//         unordered_map<ListNode*,int> m;
//         int x = 1;
//         ListNode*temp = head;
//         while(temp!=NULL){
//             m[temp] = x;
//             x++;
//             temp=temp->next;
//         }
//         int mid = x/2 + x%2 - 1;
//         for(auto i:m){
//             if(i.second == mid){
//                 i.first->next = i.first->next->next;
//                 break;
//             }
//         }
//         return head;
//     }
// };

/*
    /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution
// {
// public:
//     Solution()
//     {
//         ios_base::sync_with_stdio(false);
//         cin.tie(NULL);
//         cout.tie(NULL);
//     }
//     ListNode *deleteMiddle(ListNode *head)
//     {
//         if (head->next == NULL)
//             return NULL;
//         if (head->next->next == NULL)
//         {
//             head->next = NULL;
//             return head;
//         }
//         ListNode *slow = head;
//         ListNode *fast = head->next->next;
//         while (fast != NULL && fast->next != NULL)
//         {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         slow->next = slow->next->next;
//         return head;
//     }
// };