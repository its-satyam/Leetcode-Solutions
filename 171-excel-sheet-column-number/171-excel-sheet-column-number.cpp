class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int c=(columnTitle.at(i)-65)+1;
            ans=ans*26+c;
        }
        return ans;
    }
};