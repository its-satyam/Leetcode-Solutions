class Solution {
public:
    int maximumDetonation(vector<vector<int>>& bombs) {
        int n = bombs.size();
        float dist;
        
        vector<vector<char>> adj(n);
        
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            if(i==j)
            continue;
            
            dist = calc(bombs[i][0],bombs[i][1],bombs[j][0],bombs[j][1]);
            
            if(dist<=bombs[i][2])
            adj[i].push_back(j);
    }
            
        char* visited=new char[n/8 +1];
        fill(visited,visited+n/8 +1,0);
        
        short count,max=INT_MIN;
        
        for(int i=0;i<n;i++){
       fill(visited,visited+n/8 +1,0);
        count=0;
        dfs(i,visited,adj,count);
            
            if(count>max){
            max = count;
            
            if(max==n)
            return(n);
            }
        
        }
        
        return(max);
        
    }
    
    float calc(long x1,long y1,int x2,int y2){
      float t =  (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
      return(sqrt(t));  
    }
    
    void dfs(int curr,char* visited,vector<vector<char>> &adj,short &compsize){
        visited[curr/8]|=(1<<(curr%8));
        compsize+=1;
        
        for(auto it:adj[curr])
        if(!(visited[it/8]&(1<<(it%8))))
        dfs(it,visited,adj,compsize);
        
        return;
        
    }
};