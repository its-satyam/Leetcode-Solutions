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
    int c=0;
	void helper(TreeNode *root,int cmp){
		if(root){
			if(root->val>=cmp) c++;
			if(root->left)
				helper(root->left,max(root->val,cmp));
			if(root->right)
				helper(root->right,max(root->val,cmp));
		}
	}
	int goodNodes(TreeNode* root) {
		helper(root,INT_MIN);
		return c;
	}
};