class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        int ans=INT_MAX;
        int f=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i%10==nums[i])
            {
                ans=min(ans,i);
                f=1;
            }
        }
        if(f==1)
            return ans;
        else
            return -1;
    }
};