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
class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
    }
    void sol(vector<vector<int>> &answer,TreeNode* root, int depth){
        if(!root) return;
        if(answer.size() == depth){
            answer.push_back(vector<int>());
        }
        answer[depth].push_back(root->val);
        sol(answer,root->left,depth+1);
        sol(answer,root->right,depth+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> answer;
        sol(answer,root,0);
        return answer;
    }
};