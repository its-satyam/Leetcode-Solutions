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
    int ans=INT_MIN;
	void helper(TreeNode *root,int l,int h){
		 if(root){
			 ans=max(ans,max(h-root->val,root->val-l));
			 if(root->left) helper(root->left,min(root->val,l),max(h,root->val));
			 if(root->right)  helper(root->right,min(root->val,l),max(h,root->val));
		 }
	}
	int maxAncestorDiff(TreeNode* root) {
		helper(root,1000001,-1);
		return ans;
	}
};