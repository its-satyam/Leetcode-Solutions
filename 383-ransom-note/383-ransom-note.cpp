class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> m;
        int a=magazine.length();
        for(int i=0;i<a;i++)
        {
            m[magazine[i]]++;
        }
        int b=ransomNote.length();
        for(int i=0;i<b;i++)
        {
            if(m[ransomNote[i]]==0)
                return false;
            else
            {
                if(m[ransomNote[i]]>=1)
                    m[ransomNote[i]]--;
            }
        }
        return true;
        
    }
};