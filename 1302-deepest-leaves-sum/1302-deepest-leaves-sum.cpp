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
        int depth = 1;
        int ans = 0;
        int deepestLeavesSum(TreeNode* root,int cur_depth = 1) 
        {
            if(root == NULL)
                return 0;
            if(cur_depth == depth)
                ans += root->val;
            if(cur_depth > depth)
            {
                depth = cur_depth;
                ans = root->val;
            }
            deepestLeavesSum(root->left,cur_depth + 1);
            deepestLeavesSum(root->right,cur_depth + 1);
            return ans;
        }
};