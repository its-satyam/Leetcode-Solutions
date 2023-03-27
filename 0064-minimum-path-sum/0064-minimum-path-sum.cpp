class Solution {
public:
    int recur(int i, int j, vector<vector<int>>& dp, vector<vector<int>>& grid){
        if(i==0 && j==0)
            return grid[0][0];
        if(i<0 || j<0) 
            return 1001;
        if(dp[i][j]!=-1) 
            return dp[i][j];
        return dp[i][j] = grid[i][j] + min(recur(i-1, j, dp, grid), recur(i, j-1, dp, grid));
    }
    int minPathSum(vector<vector<int>>& grid){
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> dp(n, vector<int> (m, -1));
        return recur(n-1, m-1, dp, grid);
    }
};