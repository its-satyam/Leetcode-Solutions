class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(c==nums[i])
            {
                c++;
            }
            else
                break;
        }
        return c;
    }
};