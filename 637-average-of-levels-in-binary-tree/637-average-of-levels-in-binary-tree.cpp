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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            long lvlSum = 0;
            int s = q.size();
            
            for(int i=0; i<s; i++){
                TreeNode *front = q.front();
                q.pop();
                
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
                
                lvlSum += front->val;            
            }
            
            
            ans.push_back((double)lvlSum/s);
        }
        
        return ans;
    }
};