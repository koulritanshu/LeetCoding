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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> answer;
        if(!root) return answer;
        vector<int> curr;
        q.push(root);
        q.push(NULL);
        TreeNode* t;
        while(!q.empty()){
            t = q.front();
            q.pop();
            if(t == NULL){
                answer.push_back(curr);
                curr.clear();
                if(q.size()>0){
                    q.push(NULL);
                }
            }
            else{
                curr.push_back(t->val);
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
        }
        return answer;
    }
};