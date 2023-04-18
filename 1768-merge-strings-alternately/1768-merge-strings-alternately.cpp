class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.length();
        int m=word2.length();
        string ans="";
        int i=0;
        while(i<n && i<m)
        {
            ans+=word1[i];
            ans+=word2[i];
            i++;
        }
        if(i<n)
        {
            while(i<n)
            {
                ans+=word1[i];
                i++;
            }
        }
        if(i<m)
        {
            while(i<m)
            {
                ans+=word2[i];
                i++;
            }
        }
        return ans;
    }
};