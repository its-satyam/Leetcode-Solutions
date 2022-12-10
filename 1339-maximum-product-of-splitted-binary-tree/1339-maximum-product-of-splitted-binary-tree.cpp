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
    int tot;
    long res = 0;
    int sumNodes(TreeNode *root) {
        return root->val
            + (root->left ? sumNodes(root->left) : 0)
            + (root->right ? sumNodes(root->right) : 0);
    }
    int getBestProd(TreeNode *root) {
        // support variable
        long tmp = root->val;
        // checking the left branch
        tmp += root->left ? getBestProd(root->left) : 0;
        // checking the right branch
        tmp += root->right ? getBestProd(root->right) : 0;
        // updating res
        res = max(res, (tot - tmp) * tmp);
        return tmp;
    }
public:
    int maxProduct(TreeNode *root) {
        tot = sumNodes(root);
        getBestProd(root);
        return res % 1000000007;
    }
};