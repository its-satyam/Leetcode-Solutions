class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
        int n=s.length();
        int st=0;
        int end=0;
        int ans=0;
        while(end<n)
        {
            m[s[end]]++;
            while(m[s[end]]!=1)
            {
                m[s[st]]--;
                st++;
            }
            ans=max(ans,end-st+1);
            end++;
        }
        return ans;
    }
};