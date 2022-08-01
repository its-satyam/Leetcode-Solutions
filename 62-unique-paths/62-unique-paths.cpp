class Solution {
public:
   int uniquePaths(int m, int n) {
        
        vector<vector<int>> dp(m , vector<int>(n, -1));
        
        dp[m-1][n-1] = 1;
        
        for(int i = m-2 ; i >= 0 ; i--){
            
            for(int j = n-2 ; j >= 0 ; j--){
                

                    int x = dp[i+1][j];
                    int y = dp[i][j+1];

                    dp[i][j] = x+y;
                
            }
        }
        return abs(dp[0][0]);
    }
};