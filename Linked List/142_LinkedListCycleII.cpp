// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode(int x) : val(x), next(NULL) {}
//  * };
//  */
// class Solution {
// public:
//     Solution(){
//         ios_base::sync_with_stdio(false);
//         cin.tie(nullptr);
//         cout.tie(nullptr);
//     }
//     ListNode *detectCycle(ListNode *head) {
//         unordered_map<ListNode*,int> m;
//         ListNode*temp = head;
//         while(temp!=NULL){
//             if(!m[temp]){
//                 m[temp] = 1;
//                 temp = temp->next;
//             }
//             else{
//                 return temp;
//             }
//         }
//         return NULL;
//     }
// };

/*
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/*
class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    ListNode *detectCycle(ListNode *head) {
        ListNode*slow = head;
        ListNode*fast = head;
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(fast==slow){
                slow = head;
                while(slow!=fast){
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};

*/