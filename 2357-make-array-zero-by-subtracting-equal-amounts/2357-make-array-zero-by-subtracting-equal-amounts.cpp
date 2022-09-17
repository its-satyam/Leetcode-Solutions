class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i =0; i<nums.size(); i++)
            mp[nums[i]]++;  
        int count = mp.count(0);   
        return mp.size()-count;  
        
    }
};