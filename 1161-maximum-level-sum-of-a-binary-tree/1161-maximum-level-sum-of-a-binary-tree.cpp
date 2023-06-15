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
    void task(TreeNode* root, unordered_map<int,int> &map, int level){
		//Return when the node is NULL
        if(root== NULL){
            return;
        }
		//Add all the node values at that level i.e index for map
        map[level] += root->val;
        task(root->left, map, level+1);
        task(root->right, map, level+1);
    }
    int maxLevelSum(TreeNode* root) {
		// Create a unordered map 
        unordered_map<int,int> map;
		//pass it along with root to a void fxn task
        task(root,map,1);
        int max = INT_MIN;
        int a, cur=0;
		//Make a Loop and keep if it is maximum value then keep making it a variable
        for(auto it:map){
            cur = it.second;
            if (cur>=max){
                a = it.first;
                max = cur;
            }
        }
		//return index at max value it  
        return a;
    }
};