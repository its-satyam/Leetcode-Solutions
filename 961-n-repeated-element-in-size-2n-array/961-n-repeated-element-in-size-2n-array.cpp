class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int c=0;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
                c=nums[i];
        }
        return c;
    }
};