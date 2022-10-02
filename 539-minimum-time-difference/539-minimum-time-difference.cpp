class Solution {
public:
    int diff(string &a,string &b)
    {
        int h1=stoi(a.substr(0,2));
        int h2=stoi(b.substr(0,2));
        int m1=stoi(a.substr(3,2));
        int m2=stoi(b.substr(3,2));
        return (h2-h1)*60+m2-m1;
    }
    int findMinDifference(vector<string>& t) 
    {
        int n=t.size();
        sort(t.begin(),t.end());
        int ans=INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            int val=diff(t[i],t[i+1]);
            val=min(val,1440-val);
            ans=min(ans,val);
        }
        int val=diff(t[0],t[n-1]);
        val=min(val,1440-val);
        ans=min(ans,val);
        return ans;
    }
};