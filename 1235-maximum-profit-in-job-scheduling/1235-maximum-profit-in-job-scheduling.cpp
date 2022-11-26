class Solution {
public:
    int bs(vector<vector<int>>&vec,int s,int t)
        {
            int e=vec.size()-1;
            int ans=-1;
            while(s<=e)
            {
                int mid=(s+e)/2;
                if(vec[mid][0]>=t)
                {
                    ans=mid;
                    e=mid-1;
                }
                else
                    s=mid+1;
            }
            return ans;
        } 
        int solve(int ind,vector<vector<int>>&vec,vector<int>&dp)
        {
            if(ind==vec.size() || ind==-1) return 0;
            if(dp[ind]!=-1) return dp[ind];
            int ans=0;
            int index=bs(vec,ind,vec[ind][1]);
            ans=max(solve(ind+1,vec,dp),vec[ind][2]+solve(index,vec,dp));
            return dp[ind]=ans;
        }
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) 
    {
        vector<vector<int>>vec;
        int n=startTime.size();
        for(int i=0;i<n;i++)
        {
            vec.push_back({startTime[i],endTime[i],profit[i]});
        }
        sort(vec.begin(),vec.end());
        vector<int>dp(n+1,-1);
        return solve(0,vec,dp);
    }
};