class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> s = heights;
        sort(heights.begin(),heights.end());
        int c=0;
        for(int i=0;i<heights.size();i++)
        {
            if(heights[i]!=s[i])
                c++;
        }
        return c;
    }
};