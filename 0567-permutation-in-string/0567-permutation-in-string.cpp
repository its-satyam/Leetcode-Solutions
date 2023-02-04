class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> v1(26,0);
        vector<int> v2(26,0);
        if(s1.length()>s2.length()) 
            return false;
        for(int i=0;i<s1.size();i++)
        {
            v1[s1[i]-'a']++;
            v2[s2[i]-'a']++;
        }
        // for(auto i:v1) cout<<i<<" ";
        // cout<<endl;

        for(int i=0;i<s2.length()-s1.length();i++)
        {
            // for(auto k:v2) cout<<k<<" ";
            // cout<<endl;
            if(v1==v2)
            return true;

            v2[s2[i+s1.length()]-'a']++;
            v2[s2[i]-'a']--;
        }
        if(v1==v2)
        return true;

        return false;
    }
};