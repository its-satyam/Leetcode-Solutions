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
    int minDepth(TreeNode* r) {
        if(r == NULL) 
            return 0;
        int ls = minDepth(r->left);
        int rs = minDepth(r->right);
        if(ls == 0 && rs == 0) 
            return 1;
        if(rs == 0) 
            return ls+1;
        if(ls == 0) 
            return rs+1;
        int x = min(ls,rs);
        return  x + 1;
    }
};