class Solution {
public:
unordered_map<string,vector<pair<string,double>>>adj;
void dfs(string a,string b,  unordered_map<string,bool>&vis,double temp,double &ans){
    if(vis[a])return;
    if(a==b){
        ans=temp;
        return;
    }
    vis[a]=1;
    for(auto x:adj[a]){
        dfs(x.first,b,vis,temp*x.second,ans);
    }
}
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        int k=0;
for(auto x:equations){
    string a=x[0];
    string b=x[1];
    adj[a].push_back({b,values[k]});
    adj[b].push_back({a,1.0/values[k]});
    k++;

}

vector<double>ans;
for(auto x:queries){
    string a=x[0];
    string b=x[1];
    unordered_map<string,bool>vis;
    if(adj.find(a)==adj.end()){
        ans.push_back(-1.00);
        continue;
    }
    double temp=1.00;
    double ans1=-1.000;
    dfs(a,b,vis,temp,ans1);
ans.push_back(ans1);
}

return ans;

    }
};