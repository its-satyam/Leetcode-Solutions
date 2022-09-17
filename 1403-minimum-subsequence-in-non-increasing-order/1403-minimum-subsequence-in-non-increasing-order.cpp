class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        vector<int> ans;
        int s=0;
        sort(nums.begin(),nums.end());
        int sum=accumulate(nums.begin(),nums.end(),0);
        for(int i=nums.size()-1;i>=0;i--)
        {
            ans.push_back(nums[i]);
            s+=nums[i];
            if(sum-s<s)
                break;
        }
        return ans;
    }
};