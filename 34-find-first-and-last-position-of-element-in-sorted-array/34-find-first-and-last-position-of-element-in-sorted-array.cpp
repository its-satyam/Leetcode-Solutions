class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.empty() || target < nums[0] || target > nums[nums.size() - 1])
            return {-1, -1};
        if (nums.size() == 1 && nums[0] == target)
            return {0, 0};
        int first = 0, last = nums.size() - 1;
        while (first <= last) {
            if (nums[first] != target)
                ++first;
            if (nums[last] != target)
                --last;
            if (nums[first] == target && nums[last] == target)
                return {first, last};
        }
        return {-1, -1};
    }
};