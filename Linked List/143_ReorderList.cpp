// ANOTHER APPROACH

// #include <iostream>
// using namespace std;
// typedef long long ll;

// class ListNode
// {
// public:
//     int val;
//     ListNode *next;
//     ListNode *head;
//     ListNode()
//     {
//         val = 0;
//         next = NULL;
//         head = NULL;
//     }
//     ListNode(int x) : val(x)
//     {
//         next = NULL;
//         head = NULL;
//     }
//     void insertAtEnd(int x)
//     {
//         ListNode *temp = new ListNode(x);
//         if (head == NULL)
//         {
//             head = temp;
//         }
//         else
//         {
//             ListNode *temp2 = head;
//             while (temp2->next != NULL)
//             {
//                 temp2 = temp2->next;
//             }
//             temp2->next = temp;
//         }
//     }
//     void reverseHalf(int n)
//     {
//         ListNode *temp = head;
//         int i = 0;
//         int k = n / 2;
//         while (i != k)
//         {
//             i++;
//             temp = temp->next;
//         }
//         ListNode *pre = temp;
//         ListNode *curr = temp->next;
//         ListNode *next = curr->next;
//         temp = pre;
//         while (curr != NULL)
//         {
//             curr->next = pre;
//             pre = curr;
//             curr = next;
//             if (next != NULL)
//                 next = next->next;
//         }
//         ListNode*fromBehind = pre;
//         ListNode*fromStart = head;
//         ListNode*x = new ListNode();
//         ListNode*tem = x;
//         i = 0;
//         while(i!=n/2){
//             tem->next = fromStart;
//             fromStart=fromStart->next;
//             tem=tem->next;
//             tem->next = fromBehind;
//             fromBehind = fromBehind->next;
//             tem=tem->next;
//             i++;
//         }
//         if(n%2==1){
//             tem->next = fromStart;
//             tem=tem->next;
//         }
//         tem->next = NULL;
//         x = x->next;
//         ListNode* y = x;
//         while(y!=NULL){
//             cout << y->val << " ";
//             y = y->next;
//         }
//     }
// };

// int main()
// {
//     ListNode obj;
//     int n;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         int x;
//         cin >> x;
//         obj.insertAtEnd(x);
//     }
//     obj.reverseHalf(n);
//     return 0;
// }

#include <iostream>
#include <stack>
using namespace std;
typedef long long ll;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    void reorderList(ListNode *head)
    {
        if (head == NULL || head->next == NULL || head->next->next == NULL)
            return;
        stack<ListNode *> s;
        int size = 0;
        ListNode *temp = head;
        while (temp != NULL)
        {
            size++;
            s.push(temp);
            temp = temp->next;
        }
        temp = head;
        int i = 0;
        while (i != size / 2)
        {
            ListNode *nex = temp->next;
            temp->next = s.top();
            s.pop();
            temp = temp->next;
            temp->next = nex;
            temp = temp->next;
            i++;
        }
        // if(size%2==1){
        //     temp->next = s.top();
        //     s.pop();
        //     temp=temp->next;
        // }
        temp->next = NULL;
    }
};