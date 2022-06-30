class Solution {
public:
   int minCostClimbingStairs(vector<int>& c) {
        int n = c.size();
        if(n == 2) return min(c[0],c[1]);
        vector<int> dp(n+1);
        dp[n] = c[n-1];
        dp[n-1] = c[n-2];
        for(int i = n-2;i>0;i--)
            dp[i] = c[i-1] + min(dp[i+1],dp[i+2]);
        return min(dp[1],dp[2]);
    }
};