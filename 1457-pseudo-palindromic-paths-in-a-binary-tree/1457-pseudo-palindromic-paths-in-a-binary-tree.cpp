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
    int ans=0;
    int pseudoPalindromicPaths (TreeNode* root) {
        preorder(root,0);
        return ans;
    }
    void preorder(TreeNode *node,int cnt)
    {
        if(node==NULL)
            return;
        cnt ^= (1 << node->val);
        if (!node->left && !node->right) 
        {
            ans += (cnt & (cnt - 1)) == 0;
        }
        preorder(node->left, cnt);
        preorder(node->right, cnt);
    }
};