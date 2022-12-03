class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int n=strs.size();
        int count=0;
        string s="";
        int l=strs[0].size();
        for(int i=0;i<l;i++)
        {
            for(int j=0;j<n;j++)
            {
                s+=strs[j][i];
            }
            if(!is_sorted(s.begin(),s.end()))
                count++;
            s="";
        }
        return count;
    }
};