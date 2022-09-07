class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size(), ans = 1;
        for(int i = 0; i<n-1; i++)
        {
            unordered_map<int,int> mp;
            for(int j = i+1; j<n; j++)
            {
                int slope = 10000*(points[j][1] - points[i][1]);
                if(points[j][0] == points[i][0]) 
                    slope = INT_MAX;
                else 
                    slope /=(points[j][0] - points[i][0]);
                mp[slope]++;
            }
            for(auto m : mp)
            {
                ans = max(ans, m.second + 1);
            }
        }
        return ans;
    }
};