class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n=s.length();
        int i=0,j=n-1;
        while(i<=j)
        {
            if(s[i]>=65 && s[i]<=90 || s[i]>=97 && s[i]<=122)
            {
                if(s[j]>=65 && s[j]<=90 || s[j]>=97 && s[j]<=122)
                {
                    swap(s[i],s[j]);
                    i++;
                    j--;
                }
                else
                    j--;
            }
            else
                i++;
        }
        return s;
    }
};