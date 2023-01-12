class Solution {
public:
   void dfs(vector<vector<int>>& graph, vector<int>& ans, int par, int node, string& labels, vector<int> ancestor) {
        
        int same_label_ancestor = ancestor[labels[node] - 'a'];
		ancestor[labels[node] - 'a'] = node;  // update ancestor
        
        for (int child : graph[node]) {
            if (child != par) {
                dfs(graph, ans, node, child, labels, ancestor);
            }
        }
        
        ans[node]++;
        if (same_label_ancestor != -1)
            ans[same_label_ancestor] += ans[node];  
    }
    
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vector<vector<int>> graph(n, vector<int>());
        vector<int> ans(n, 0);
        vector<int> ancestor(26, -1);  // array to save nearest ancestor with a given label
        
        for (auto edge : edges) {
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        
        dfs(graph, ans, -1, 0, labels, ancestor);
        return ans; 
    }
};