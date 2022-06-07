class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) 
    {
        map<int,vector<int>> m;
        for(auto i : arr)
        {
            int b = __builtin_popcount(i);
            m[b].push_back(i);
        }
        vector<int> ans;
        for(auto i : m)
        {
            vector<int> h = i.second;
            sort(h.begin(),h.end());
            for(auto j : h)
                ans.push_back(j);
        }
        return ans;
    }
};