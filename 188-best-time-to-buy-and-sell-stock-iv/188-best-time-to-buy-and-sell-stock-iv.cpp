class Solution {
public:
        int dp[1005][105][2];
    int helper(vector<int>& prices, int i, int n, int k, bool state)
    {
        if(k<0||i==n)
            return 0;
        if(dp[i][k][state]!=-1)
            return dp[i][k][state];
        int maxi=INT_MIN;
        if(state)
            maxi=max(maxi,-prices[i]+helper(prices,i+1,n,k-1,!state));
        else
            maxi=max(maxi,prices[i]+helper(prices,i+1,n,k,!state));        
        maxi=max(maxi,helper(prices,i+1,n,k,state));
        return dp[i][k][state]=maxi;
    }
    int maxProfit(int k, vector<int>& prices)
    {
        int n=prices.size();
        memset(dp,-1,sizeof(dp));
        return helper(prices,0,n,k,true);
    }
};