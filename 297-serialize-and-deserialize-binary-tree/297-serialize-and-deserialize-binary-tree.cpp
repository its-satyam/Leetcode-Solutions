/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root==NULL) 
            return "";
        
        string s = "";
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* atNode = q.front();
            q.pop();
            if(atNode==NULL) 
                s.append("#,");
            else 
                s.append(to_string(atNode->val)+',');
            if(atNode!=NULL)
            {
                q.push(atNode->left);
                q.push(atNode->right);
            }
        }
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size()==0) 
            return NULL;
        stringstream s(data);
        string str;
        getline(s,str,',');
        TreeNode* root = new TreeNode(stoi(str));
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* node = q.front();
            q.pop();
            
            getline(s,str,',');
            if(str=="#") 
                node->left = NULL;
            else
            {
                TreeNode* treeLeft = new TreeNode(stoi(str));
                node->left = treeLeft;
                q.push(treeLeft);
            }
            
            getline(s,str,',');
            if(str=="#") 
                node->right = NULL;
            else
            {
                TreeNode* treeRight = new TreeNode(stoi(str));
                node->right = treeRight;
                q.push(treeRight);
            }
        }
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));