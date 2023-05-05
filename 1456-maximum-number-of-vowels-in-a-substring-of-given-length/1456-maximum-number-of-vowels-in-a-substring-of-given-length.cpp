class Solution {
public:
    bool isVowel(char &A)
    {
        if(A == 'a' || A == 'e'|| A == 'i' || A == 'o' || A == 'u' )
        {
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int ans=0,i=0,count=0;
        for(int j=0;j<s.size();j++)
        {
             if(isVowel(s[j]))
             {
                 count++;
             }
             if(j-i+1 == k)
             {
                 ans=max(ans,count);
                 if(isVowel(s[i]))
                 {
                     count--;
                     i++;
                 }
                 else
                 {
                     i++;
                 }
             }
        }
        return ans;
    }
};