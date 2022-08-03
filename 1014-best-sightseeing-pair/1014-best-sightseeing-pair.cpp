class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& a) {
        int n=a.size();
        int ans=INT_MIN;
        int ai=a[0]+0;
        for(int j=1;j<n;j++)
        {
            ans=max(ans,ai+a[j]-j);
            ai=max(ai,a[j]+j);
        }
        return ans;
    }
};