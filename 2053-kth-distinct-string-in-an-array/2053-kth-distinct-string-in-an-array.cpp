class Solution {
public:
    string kthDistinct(vector<string>& arr, int k)
    {
        unordered_map<string, int> mp;
        for(string s : arr) 
            mp[s]++;
        int n = 0;
        for(string s : arr)
        {
            if(mp[s] == 1) 
                n++;
            if(n == k) 
                return s;
        }
        return "";
    }
};