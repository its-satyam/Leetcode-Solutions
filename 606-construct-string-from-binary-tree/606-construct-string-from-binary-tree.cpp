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
    string tree2str(TreeNode* root) {
        if(root->left==NULL && root->right==NULL) 
            return to_string(root->val);
        string subl="("+(root->left?tree2str(root->left)+")":")");
        string subr=(root->right?"("+tree2str(root->right)+")":"");
        return to_string(root->val)+subl+subr;
    }
};