class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n = rocks.size();
        vector<int> left(n);
        for(int i = 0; i < n; i++)
            left[i] = capacity[i] - rocks[i];
        sort(left.begin(), left.end());
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(left[i] <= additionalRocks)
            {
                additionalRocks -= left[i];
                ans++;
            }
        }
        return ans;
    }
};