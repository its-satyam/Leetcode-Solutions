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
    int widthOfBinaryTree(TreeNode* root) 
{
    if(!root)  return 0;
    
    queue<pair<TreeNode*, int>> q;
    q.push({root, 0});
    
    int ans = 0;
    
    while(!q.empty())
    {
        int n = q.size();
        
        //at each level width is number of nodes(including null) between 
        //leftmost & rightmost non-null nodes
        int start = q.front().second;          //front gives leftmost of a level
        int end = q.back().second;              //back gives rightmost of a level
        
        ans = max(ans, end - start + 1);   //find max width, between 2 non null nodes
        
        for(int i = 0; i < n; i++)
        {
            TreeNode* t = q.front().first;
            
            //do,  - start as 
            // doing this make first node of each level as index 0 
            int idx = q.front().second - start;  
            
            q.pop();
            
            if(t->left)
               q.push({t->left, (long long)2 * idx + 1});     //long long to handle overflow
            if(t->right)
               q.push({t->right, (long long)2 * idx + 2});
        }
    }
  return ans;
}
};