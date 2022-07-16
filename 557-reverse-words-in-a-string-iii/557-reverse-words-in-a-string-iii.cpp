class Solution {
public:
    string reverseWords(string s) {
       for(int i=0;i<s.size();i++)
        {
            int start=i;
            while(s[i]!=' ' && i<s.size())
            {
                i++;
            }
            int end=i-1;
            while(start<=end)
            {
                swap(s[start],s[end]);
                start++;
                end--;
            }
        }
        return s;
    }
};