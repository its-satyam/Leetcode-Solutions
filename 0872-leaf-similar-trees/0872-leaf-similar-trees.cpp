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
    void helper(TreeNode* root, vector<int>& v)
    {
        if(!root)
            return;
        if(root->left==NULL && root->right==NULL)
            v.push_back(root->val);
        helper(root->left,v);
        helper(root->right,v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2)
    {
        vector<int> v1;
        vector<int> v2;
        helper(root1,v1);
        helper(root2,v2);
        return v1==v2;
    }
};