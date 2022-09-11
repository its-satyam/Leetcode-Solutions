class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> exp=heights;
        sort(heights.begin(),heights.end());
        int n=heights.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(exp[i]!=heights[i])
                c++;
        }
        return c;
    }
};