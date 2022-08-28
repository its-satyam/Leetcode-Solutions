class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& v) {
        vector<int> adj[n];
        int in[n];
        for(int i=0;i<n;i++) in[i] = 0;
        for(int i=0;i<v.size();i++)
        {
            adj[v[i][1]].push_back(v[i][0]);
            in[v[i][0]]++;
        }
        vector<int> res;
        queue<int> q;
        for(int i=0;i<n;i++)
        {
            if(in[i]==0) q.push(i);
        }
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            res.push_back(node);
            for(int child : adj[node]) 
            {
                in[child]--;
                if(in[child]==0) q.push(child);
            }
        }
        
        if(res.size()!=n) return {};
        return res;
    }
};