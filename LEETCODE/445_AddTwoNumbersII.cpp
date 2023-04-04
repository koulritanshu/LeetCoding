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
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         // APPROACH 1 is to reverse linked list1 and then reverse linked list2
//         // and then simply add the two linked lists by using concept of merging
//         // of sorted arrays
//         // APPROACH 2 is to use stacks so that the element at end is 
//         // automatically stored at the top
//         stack<int> first;
//         stack<int> second;
//         ListNode*temp1 = l1;
//         ListNode*temp2 = l2;
//         while(temp1!=NULL){
//             first.push(temp1->val);
//             temp1=temp1->next;
//         }
//         while(temp2!=NULL){
//             second.push(temp2->val);
//             temp2=temp2->next;
//         }
//         int carry = 0;
//         ListNode* answer = NULL;
//         while(!first.empty() && !second.empty()){
//             int sum = first.top() + second.top() + carry;
//             second.pop();
//             first.pop();
//             if(sum > 9){
//                 carry = 1;
//             }
//             else{
//                 carry = 0;
//             }
//             ListNode*newNode = new ListNode(sum%10);
//             newNode->next = answer;
//             answer = newNode;
//         }
//         while(!first.empty()){
//             int sum = first.top() + carry;
//             first.pop();
//             if(sum > 9) carry = 1;
//             else carry = 0;
//             ListNode*newNode = new ListNode(sum%10);
//             newNode->next = answer;
//             answer = newNode;
//         }
//         while(!second.empty()){
//             int sum = second.top() + carry;
//             second.pop();
//             if(sum > 9) carry = 1;
//             else carry = 0;
//             ListNode*newNode = new ListNode(sum%10);
//             newNode->next = answer;
//             answer = newNode;
//         }
//         if(carry){
//             carry = 0;
//             ListNode*newNode = new ListNode(1);
//             newNode->next = answer;
//             answer = newNode;
//         }
//         return answer;
//     }
// };