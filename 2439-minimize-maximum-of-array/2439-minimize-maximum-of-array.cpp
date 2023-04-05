class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        int n = nums.size();
        long sum = 0;
        int maxi = 0;
        for(int i=0; i<n; i++)
        {
            sum += nums[i];
            maxi = max(maxi, (int)ceil((double)sum / (i + 1)));
        }
        return maxi;
    }
};