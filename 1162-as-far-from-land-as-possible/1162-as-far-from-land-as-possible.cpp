class Solution {
public:
    int maxDistance(vector<vector<int>>& g) {
        int n=g.size();
        int cnt=0;
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(g[i][j]==1) 
                    q.push({i,j});
            }
        }
        int temp=q.size();
        if(temp==0 or temp==n*n) 
            return -1;
        int ans=0;
        while(!q.empty()){
            ans++;
            int k=q.size();
            while(k--){
                pair<int,int> p = q.front();
				// check for upper element
                if(p.first>0 and g[p.first-1][p.second]==0){
                    g[p.first-1][p.second]=ans;
                    q.push({p.first-1,p.second});
                } 
				// check for bottom element
                if(p.first<n-1 and g[p.first+1][p.second]==0){
                    g[p.first+1][p.second]=ans;
                    q.push({p.first+1,p.second});
                }
				// check for left element
                if(p.second>0 and g[p.first][p.second-1]==0){
                    g[p.first][p.second-1]=ans;
                    q.push({p.first,p.second-1});
                }
				// check for right element
                if(p.second<n-1 and g[p.first][p.second+1]==0){
                    g[p.first][p.second+1]=ans;
                    q.push({p.first,p.second+1});
                }
                q.pop();
            }
        }
         // return answer - 1 because initially when we started increasing answer we already have all ones' indexes were added to queue thats why it takes one more step
        return ans-1;
        
    }
};