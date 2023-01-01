class Solution {
public:
    int xx[4]={0, 1, 0, -1};
    int yy[4]={-1, 0, 1, 0};
    int ans=0;
    int count, n, m;
    void dfs(vector<vector<int>>& grid, int x, int y) 
    {
        if(grid[x][y])
        {
            ans+=(grid[x][y] == 2 && count == 0);
            return;
        }
        grid[x][y] = -1;
        count--;
        for(int i = 0;i<4;i++)
        {
            int nx = x + xx[i];
            int ny = y + yy[i]; 
            if(nx >= 0&&ny>= 0&&nx<n&&ny<m)
            dfs(grid,nx, ny);
        }
        count++;
        grid[x][y] = 0;
        
    }
    int uniquePathsIII(vector<vector<int>>& grid) 
    {
        n=grid.size();
        m=grid[0].size();
        int stx,sty;
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                if(grid[i][j] == 1)
                {stx=i;sty=j;}
                if(!grid[i][j])
                count+=1; 
            }
        }
        for(int i = 0;i<4;i++)
        {
            int x = stx + xx[i];
            int y = sty + yy[i]; 
            if(x >= 0&&y>= 0&&x<n&&y<m)
            dfs(grid,x, y);
        }
        return ans;
    }
};