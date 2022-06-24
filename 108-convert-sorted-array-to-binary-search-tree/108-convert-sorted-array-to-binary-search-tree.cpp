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
    TreeNode* sa(vector<int>&v,int i,int j)
	{
		if(i>j)
		{
			return NULL;
		}

		int m = i+(j-i)/2;
		TreeNode *x = new TreeNode(v[m]);
		x->left = sa(v,i,m-1);
		x->right = sa(v,m+1,j);

		return x;
	}
	TreeNode* sortedArrayToBST(vector<int>& v) {
		return sa(v,0,v.size()-1);
	}

};