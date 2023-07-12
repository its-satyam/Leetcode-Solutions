class Solution {
public:
        bool dfscheck(int node, vector<vector<int>> &graph, vector<int> &vis, vector<int> &path, vector<int> &check)
    {
        vis[node]=1;
        path[node]=1;
        check[node]=0;
        for(auto i: graph[node])
        {
            if(!vis[i])
            {
                if(dfscheck(i,graph, vis, path,check)==true)
                {
                    check[node]=0;
                    return true;
                }
            }
            else if(path[i])
            {
                check[node]=0;
                return true;
            } 
        }
        check[node]=1;
        path[node]=0;
        return false;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph)
    {
        int v=graph.size();
        vector<int> vis;
        vector<int> path;
        vector<int> check;
        for(int i=0;i<v;i++)
        {
            vis.push_back(0);
            path.push_back(0);
            check.push_back(0);
        }
        vector<int> safenodes;
        for(int i=0;i<v;i++)
        {
            if(!vis[i])
                dfscheck(i,graph,vis,path,check);
        }
        for(int i=0;i<v;i++)
        {
            if(check[i]==1)
                safenodes.push_back(i);
        }
        return safenodes;
         
    }
};