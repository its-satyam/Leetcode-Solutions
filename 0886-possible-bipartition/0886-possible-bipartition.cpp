class Solution {
public:
   bool isBipartite(vector<int>adj[],vector<int>&color,int node,int n){
        queue<int>q;
        q.push(node);
        color[node]=1;
        while(q.size()){
            int curr=q.front();
            q.pop();
            for(int ele:adj[curr]){
                if(color[curr]==color[ele])return false;
                if(color[ele]==-1){
                    color[ele]=1-color[curr];
                    q.push(ele);
                }
            }
        }
        return true;
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<int>adj[n+1];
        for(int i=0;i<dislikes.size();i++){
            adj[dislikes[i][0]].push_back(dislikes[i][1]);
            adj[dislikes[i][1]].push_back(dislikes[i][0]);
        }
        vector<int> color(n+1,-1);
        for(int i=1;i<=n;i++)
            if(color[i]==-1)
                if(!isBipartite(adj,color,i,n))
                    return false;
        return true;
    }
};