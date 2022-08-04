class Solution {
public:
    int fib(int n) {
        // if(n==0)
        //     return 0;
        // else if(n==1)
        //     return 1;
        // else
        //     return fib(n-1)+fib(n-2);
        
        int dp[2] = {0, 1};
        for (int i = 2; i <= n; ++i)
        dp[i%2] += dp[(i+1)%2] ;
        return dp[n%2];
    }
};