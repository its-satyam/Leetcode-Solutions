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
       void helper(TreeNode* root, TreeNode* &ans,TreeNode* &curr)
    {
        if(root==NULL)
            return;
        helper(root->left,ans,curr);
        if(ans==NULL)
        {
            ans=root;
            curr=ans;
        }
        else{
            curr->right=root;
            curr=curr->right;
            curr->left=NULL;
        }
        helper(root->right,ans,curr);
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* ans=NULL;
        TreeNode* curr=NULL;
        helper(root,ans,curr);
        return ans;
    }
};