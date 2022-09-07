class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string s="";
        int n=words.size();
        for(int i=0;i<n;i++)
        {
            s=words[i];
            int sn=s.length();
            reverse(s.begin(),s.end());
            if(words[i]==s)
                return s;
            else
                s="";
        }
        return s;
    }
};