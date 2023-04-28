#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define endl "\n"
typedef long long ll;

ll power(ll a, ll b, ll mod = MOD)
{
    ll res = 1;
    while (b)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b = b / 2;
    }
    return res;
}

template <class T>
void display(ll n, T arr[])
{
    for (ll i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

template <class T>
void input(ll n, T arr[])
{
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

int power(int x, unsigned int y)
{
    if (y == 0)
        return 1;
    int temp = power(x, y / 2);
    if (y % 2 == 0)
        return temp * temp;
    else
        return x * temp * temp;
}

void solve()
{
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// NAIVE APPROACH
// TIME COMPLEXITY - O(N*N)
// BECAUSE WE ARE CALLING HEIGHT FUNCTION EVERYTIME

// class Solution
// {
// public:
//     Solution()
//     {
//         ios_base::sync_with_stdio(false);
//         cin.tie(0);
//         cout.tie(0);
//     }
//     int height(TreeNode *root)
//     {
//         if (!root)
//             return 0;
//         int l = height(root->left);
//         int r = height(root->right);
//         if (l > r)
//             return l + 1;
//         else
//             return r + 1;
//     }
//     bool isBalanced(TreeNode *root)
//     {
//         if (root)
//         {
//             int left = height(root->left);
//             int right = height(root->right);
//             if (abs(left - right) > 1)
//                 return false;
//             else
//             {
//                 if (!isBalanced(root->left))
//                     return false;
//                 if (!isBalanced(root->right))
//                     return false;
//             }
//         }
//         return true;
//     }
// };

