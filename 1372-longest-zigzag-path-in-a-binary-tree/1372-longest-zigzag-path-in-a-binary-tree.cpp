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
    int longestZigZag(TreeNode* root) {
        vector<int> res = dfs(root);
        return res[2];
    }
private:
    vector<int> dfs(TreeNode* node) {
        if (node == nullptr) return {-1, -1, -1};
        vector<int> lsubt = dfs(node->left);
        vector<int> rsubt = dfs(node->right);
        int llen = lsubt[1] + 1;
        int rlen = rsubt[0] + 1;
        int maxlen = max({llen, rlen, lsubt[2], rsubt[2]});
        return {llen, rlen, maxlen};
    }
};