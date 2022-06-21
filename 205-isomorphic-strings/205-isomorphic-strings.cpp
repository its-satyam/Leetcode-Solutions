class Solution {
public:
    bool isIsomorphic(string s, string t) {
         if(s.size()!=t.size())
        {
            return 0;
        }
        char map_s[128]={0};
        char map_t[128]={0};
        int length=s.size();
        for(int i=0;i<length;i++)
        {
            if(map_s[s[i]]!=map_t[t[i]])
            {
                return 0;
            }
            map_s[s[i]]=i+1;
            map_t[t[i]]=i+1;
        }
        return 1;
    }
};