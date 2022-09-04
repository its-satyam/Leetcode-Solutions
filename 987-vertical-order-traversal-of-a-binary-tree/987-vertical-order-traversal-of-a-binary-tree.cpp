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
    map < pair <int, int>, vector <int> > mp;

    void helper (TreeNode* root, int vertLevel, int level)
    {
        if (root == NULL)
            return;
        mp[make_pair (vertLevel, level)].push_back (root->val);
        helper (root->left, vertLevel-1, level+1);
        helper (root->right, vertLevel+1, level+1);
    }
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector <vector <int> > ans;
        helper (root, 0, 0);
        
        map <int, vector <int> > temp;
        
        for (auto i : mp)
        {
            sort (i.second.begin(), i.second.end());
            for (int j : i.second)
                temp[i.first.first].push_back (j);
        }
        
        for (auto i : temp)
        {
            ans.push_back (i.second);
        }
        
        return ans;
    }
};