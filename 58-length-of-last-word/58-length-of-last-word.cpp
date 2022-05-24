class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(), s.end());
        int i=0;
        while(i < s.length() && !isalpha(s[i])) i++;
        int j = i;
        while(j < s.length() && isalpha(s[j])) j++;
        return j - i;
    }
};