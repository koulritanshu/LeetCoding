/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

#include <bits/stdc++.h>
using namespace std;

void disp(vector<int> v){
    cout << "staart";
    for(auto i:v){
        cout << i << " ";
    }
    cout << endl;
    cout << "end\n";
}

typedef struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(NULL), right(NULL) {}
} TreeNode;

class Solution
{
public:
    void sol(map<int,vector<int>> &answer, TreeNode *root, int depth)
    {
        if (!root)
            return;
        answer[depth].push_back(root->val);
        sol(answer, root->left, depth + 1);
        sol(answer, root->right, depth + 1);
    }
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        map<int,vector<int>> answer;
        if (!root)
            return {};
        sol(answer, root, 0);
        vector<vector<int>> sol;
        for(auto i:answer){
            if(answer[i.first].size()){
                sol.push_back(i.second);
            }
        }
        return sol;
    }
};

int main()
{
    TreeNode *root = new TreeNode();
    root->val = 100;
    TreeNode *temp = new TreeNode();
    temp->val = 50;
    root->left = temp;
    TreeNode *temp2 = new TreeNode();
    temp->left = temp2;
    temp2->val = 40;
    TreeNode *temp3 = new TreeNode();
    TreeNode *temp4 = new TreeNode();
    temp3->val = 110;
    root->right = temp3;
    temp3->left = temp4;
    temp4->val = 105;
    Solution obj;
    vector<vector<int>> answer = obj.levelOrder(root);
    for (int i = 0; i < answer.size(); i++)
    {
        for (int j = 0; j < answer[i].size(); j++)
        {
            cout << answer[i][j] << " ";
        }
        cout << endl;
    }
}