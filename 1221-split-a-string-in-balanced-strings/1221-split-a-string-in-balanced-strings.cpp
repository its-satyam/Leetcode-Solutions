class Solution {
public:
    int balancedStringSplit(string s) {
        int n=s.length();
        int ans=0,r=0,l=0;
        for(int i=0;i<n;i++)
        {
            if(r==l)
            {
                ans++;
                r=0;
                l=0;
            }
            if(s[i]=='R')
                r++;
            else
                l++;
        }
        return ans;
    }
};