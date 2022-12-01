class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.length();
        int count1=0,count2=0;
        for(int i=0;i<n;i++)
        {
            if(i>=n/2)
            {
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
                    count2++;
            }
            else
            {
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
                    count1++;
            }
        }
        if(count1==count2)
            return true;
        else
            return false;
    }
};