/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
        vector<vector<int>> ans;
    void dfs(Node* root, int level) 
    {
        if(!root)
            return;
        if(level == ans.size()) 
            ans.push_back({});
        ans[level].push_back(root->val);
        for(auto i : root->children)
            dfs(i, level+1);        
    }
    vector<vector<int>> levelOrder(Node* root)
    {
        dfs(root, 0);
        return ans;
    }
};