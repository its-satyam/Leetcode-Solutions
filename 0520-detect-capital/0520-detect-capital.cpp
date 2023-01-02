class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.size();
        if(islower(word[0]))
        {
            int c = 0;
            for(int i=0; i<n; i++)
            {
                if(islower(word[i]))
                    c++;
            }
            if(c == n)
                return true;
            return false;
        }
        else
        {
            int c = 0;
            for(int i=0; i<n; i++)
            {
                if(isupper(word[i]))
                    c++;
            }
            if(c == 1 or c == n)
                return true;
            return false;
        }
    }
};