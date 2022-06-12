class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string ss = s+s;
        string s1 = ss.substr(1,ss.size()-2);
        
        return s1.find(s)!=-1;
    }
};