class Solution {
public:
    bool isAnagram(string s, string t) {
        if(t.length()!=s.length())
            return false;
        unordered_map<char,int> m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]++;
            m[t[i]]--;
        }
        for(int i=0;i<s.length();i++)
        {
            if(m[s[i]]!=0)
                return false;
        }
        return true;
    }
};