class Solution {
public:
      int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<vector<int>> adjList(n);
        for(auto &edge : edges) {
            adjList[edge[0]].push_back(edge[1]);
            adjList[edge[1]].push_back(edge[0]);
        }

        int time = 0;
        dfs(adjList, hasApple, 0, time, -1);
        return time;
    }

    bool dfs(vector<vector<int>> &adjList, vector<bool> &hasApple, int i, int &time, int parent) {
        bool appleExistsBelow = hasApple[i];
        for(auto &node: adjList[i]) {
            if (node == parent) continue;
            time++;
            bool appleFound = dfs(adjList, hasApple, node, time, i);
            appleExistsBelow |= appleFound;
            if (!appleFound) time--;
            else time++;
        }

        return appleExistsBelow;
    }
};