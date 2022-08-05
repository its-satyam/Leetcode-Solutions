class Solution {
public:
    int helper(vector<int>& nums, int target,vector<int>& dp)
    {
        if(dp[target]>-1)
            return dp[target];
        int res=0;
        for(int i: nums)
        {
            if(i<=target)
                res+=helper(nums,target-i,dp);
        }
        dp[target]=res;
        return dp[target];
    }
    int combinationSum4(vector<int>& nums, int target) 
    {
        vector<int> dp(target+1,-1);
        dp[0]=1;
        helper(nums,target,dp);
        return dp[target];
    }
};