class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> res;
        int sum=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            res.push_back(sum);
            sum+=nums[i];
        }
        res.push_back(sum);
        return res;
    }
};