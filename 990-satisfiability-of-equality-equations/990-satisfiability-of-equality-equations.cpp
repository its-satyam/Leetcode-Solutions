class Solution {
public:
        int find(int x,vector<int> parent)
    {
        if (parent[x]!=x) 
            parent[x]=find(parent[x],parent);
        return parent[x];
    }
    void Union(int x, int y, vector<int> &rank, vector<int> &parent)
    {
        int xset=find(x,parent);
        int yset=find(y,parent);
        if (xset==yset)
            return;
        if (rank[xset]<rank[yset]) 
            parent[xset] = yset;
        else if (rank[xset]>rank[yset])
            parent[yset]=xset;
        else {
            parent[yset]=xset;
            rank[xset]=rank[xset]+1;
        }
    }
    static bool comp(const string &a,const string &b)
    {
        if(a[1]=='=' && b[1]=='!')
            return 1;
        return 0;
    }
    bool equationsPossible(vector<string>& equations)
    {
        vector<int> rank(26,0);
        vector<int>parent(26,0);
        for(int i=0;i<26;i++)
            parent[i]=i;
        sort(equations.begin(),equations.end(),comp);
        for(int i=0;i<equations.size();i++)
        {
            int u=equations[i][0]-'a';
            int v=equations[i][3]-'a';
            if(equations[i][1]=='=')
                Union(u,v,rank,parent);
            else
            {
                if(find(u,parent)==find(v,parent))
                    return 0;
            }
        }
        return 1;
    }
};