class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        int c=0,d=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i]>=nums[i-1])
                c++;
            if(nums[i]<=nums[i-1])
                d++;
        }
        if(c+1==n || d+1==n)
            return true;
        else
            return false;
    }
};