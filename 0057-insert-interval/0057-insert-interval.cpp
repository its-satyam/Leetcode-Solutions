class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
         vector<vector<int>> ans;
        int i = 0;
        for(; i < intervals.size() && intervals[i][1] < newInterval[0]; i++)
            ans.push_back(intervals[i]);
        int st = newInterval[0], en = newInterval[1];
        if(i < intervals.size() && intervals[i][0] <= newInterval[1])
            st = min(st, intervals[i][0]);
        for(; i < intervals.size() && intervals[i][0] <= newInterval[1]; i++)
            en = max(en, intervals[i][1]);
        ans.push_back({st, en});
        for(; i < intervals.size(); i++)
            ans.push_back(intervals[i]);
        return ans;
    }
};