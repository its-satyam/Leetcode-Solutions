class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int l=1;
        int h=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1])
                l = h + 1;
            else if(nums[i]<nums[i-1])
                h = l + 1;
        }
        return max(l,h);
    }
};