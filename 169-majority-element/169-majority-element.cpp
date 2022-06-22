class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m1;
        int n=nums.size();
        int ans;
        for(int i=0;i<n;i++)
        {
            m1[nums[i]]++;
        }
        for(auto it:m1)
        {
            if(it.second>n/2)
                ans=it.first;
        }
        return ans;
    }
};