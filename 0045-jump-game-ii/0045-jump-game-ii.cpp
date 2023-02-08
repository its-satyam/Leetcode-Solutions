class Solution {
public:
    int jump(vector<int>& nums) 
    {
        if (nums.size() == 1 || nums[0] == 0) 
            return 0;
        int jumps = 0, curr = 1, reach = 0, n = nums.size(), i;
        while (reach < n-1 && reach + nums[reach] < n - 1) 
        {
            for (i = curr; curr <= reach + nums[reach]; curr++)
            {
                if (curr + nums[curr] >= i + nums[i])
                    i = curr;
            }
            jumps++;
            reach = i;
        }
        return ++jumps;
    }
};