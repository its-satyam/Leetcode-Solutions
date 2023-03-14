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
    int sumNumbers(TreeNode* root) {
        int cs=0;
        return fs(root,cs);
    }
    int fs(TreeNode* root,int cs)
    {
        if(!root)
            return 0;
        cs=cs*10+root->val;
        if(!root->left && !root->right)
            return cs;
        int ls=fs(root->left,cs);
        int rs=fs(root->right,cs);
        return ls+rs;
    }
};