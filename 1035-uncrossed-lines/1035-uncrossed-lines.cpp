class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        
        int n1=nums1.size();
        int n2=nums2.size();

        int dp[n1+1][n2+1];
        memset(dp,0,sizeof(dp));

        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n2;j++)
            {
                if(nums1[i]==nums2[j])
                {
                    dp[i+1][j+1]=dp[i][j]+1;
                }
                else
                dp[i+1][j+1]=max(dp[i+1][j],dp[i][j+1]);
            }
        }
        return dp[n1][n2];
    }
};