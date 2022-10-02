class Solution {
public:
        long long dp[31][1001];
        int mod = 1000000007;
        int numRollsToTarget(int n, int k, int target) 
        {
            memset(dp,-1,sizeof(dp));
            return solve(n,k,target);
        }
        long long solve(int n,int k,int target) 
        {
            if(n==0) return target==0;
            if(dp[n][target]!=-1) return dp[n][target];
            long long cnt = 0;
            for(int v=1; v<=k; v++) 
                if(target - v >= 0) cnt = (cnt + solve(n - 1,k,target - v)) % mod;
            return dp[n][target] = cnt;
        }
};