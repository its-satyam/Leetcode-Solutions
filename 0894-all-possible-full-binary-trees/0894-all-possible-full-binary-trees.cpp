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
    map<int,vector<TreeNode*>> m;
public:
    vector<TreeNode*> allPossibleFBT(int n) {
        if(n%2 == 0)
            return {};
        if(m.find(n)!=m.end())
            return m[n];
        if(n == 1){
            TreeNode* node = new TreeNode();
            return m[n] = {node};
        }
        vector<TreeNode* > v;
        for(int i = 1; i<n-1; i+=2){
            vector<TreeNode* > left = allPossibleFBT(i);
            vector<TreeNode* > right = allPossibleFBT(n-i-1);
            if(left.size()!= 0 && right.size()!=0){
                for(int i = 0; i<left.size(); i++){
                    for(int j = 0; j<right.size(); j++){
                        TreeNode* node = new TreeNode();
                        node->left = left[i];
                        node->right = right[j];
                        v.push_back(node);
                    }
                }
            }
        }
        return m[n] = v;
    }
};