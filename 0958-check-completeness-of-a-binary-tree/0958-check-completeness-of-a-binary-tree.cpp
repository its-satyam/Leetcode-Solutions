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
    int countt(TreeNode *root)        
    {
      if(!root)
        return 0;
      return 1+countt(root->left)+countt(root->right);
    }
    bool iscomplete(TreeNode *root,int id,int count)                   
    {
      if(!root)
        return 1;
      if(id>=count)
        return false;
      return iscomplete(root->left,2*id+1,count) && iscomplete(root->right,2*id+2,count);
    }
    bool isCompleteTree(TreeNode* root) 
    {
        int count=countt(root);
        int id=0;
        return iscomplete(root,0,count);
    }
};