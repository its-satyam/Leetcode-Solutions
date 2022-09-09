class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.length();
        int a=0,b=n;
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='I')
                ans.push_back(a++);
            else if(s[i]=='D')
                ans.push_back(b--);
        }
        ans.push_back(a);
        return ans;
    }
};