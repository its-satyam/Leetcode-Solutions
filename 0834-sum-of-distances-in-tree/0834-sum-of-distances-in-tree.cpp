class Solution {
public:
   vector<unordered_set<int>>g;
    vector<int>ans,count;
    vector<int> sumOfDistancesInTree(int N, vector<vector<int>>& edges) {
        g.resize(N);
        ans.assign(N,0);
        count.assign(N,1);
        for(auto e: edges){
            g[e[0]].insert(e[1]);
            g[e[1]].insert(e[0]);
        }
        dfs(0,-1);
        dfs2(0,-1);
        return ans;
    }
    void dfs(int node,int parent){
        for(auto it: g[node]){
            if(it==parent)continue;
            dfs(it,node);
            count[node]+=count[it];
            ans[node]+=ans[it]+count[it];
        }
    }
    void dfs2(int node,int parent){
        for(auto it: g[node]){
            if(it==parent)continue;
            ans[it]=ans[node]-count[it]+count.size()-count[it];
            dfs2(it,node);
        }
    }
};