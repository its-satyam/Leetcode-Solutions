class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        unordered_map<int, vector<pair<int, int>>> graph;
        unordered_set<int> visited;
        int count = 0;
        
        for (auto& c : connections) {
            int u = c[0], v = c[1];
            graph[u].push_back({v, 1}); // the edge is initially oriented from u to v
            graph[v].push_back({u, 0}); // we need to flip the edge from v to u
        }
        
        dfs(0, graph, visited, count);
        return count;
    }
    
    void dfs(int u, unordered_map<int, vector<pair<int, int>>>& graph, unordered_set<int>& visited, int& count) {
        visited.insert(u);
        for (auto& e : graph[u]) {
            int v = e.first, w = e.second;
            if (visited.find(v) == visited.end()) {
                if (w == 1) count++; // if the edge is oriented from u to v, we don't need to flip it
                dfs(v, graph, visited, count);
            }
        }
    }
};