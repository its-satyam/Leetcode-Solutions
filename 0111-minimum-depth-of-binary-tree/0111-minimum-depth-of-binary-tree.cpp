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
    int minDepth(TreeNode* root) {
        // if(root==NULL){ 
        //     return 0;
        // }
        // int l = minDepth(root->left), r = minDepth(root->right);
        // return 1 + (min(l, r) ? min(l, r) : max(l, r));
        
        if(!root)
            return 0;
        if(!root->left || !root->right)      
            return 1+minDepth(root->right)+minDepth(root->left);
        return 1+min(minDepth(root->left),minDepth(root->right));
    }
};