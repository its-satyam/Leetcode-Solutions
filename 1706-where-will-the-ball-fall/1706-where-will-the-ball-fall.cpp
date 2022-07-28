class Solution {
public:
    int rows, cols;
    int esc(int j, vector<vector<int>>& grid)
    {
        int i = 0;
        while(i < rows) 
        {
            if(grid[i][j] == 1)
            {
                if(j == cols-1 || grid[i][j+1] == -1)
                    return -1;      
                j++;
            }
            else 
            {
                if(j == 0 || grid[i][j-1] == 1)
                    return -1;
                j--;
            }
            i++;
        }
        return (i == rows) ? j : -1;
    }
    vector<int> findBall(vector<vector<int>>& grid) 
    {
        rows = grid.size(), cols = grid[0].size();
        vector<int> ans(cols, 0);
        for(int j=0; j<cols; j++)
            ans[j] = esc(j, grid);
        return ans;
    }
};