class Solution {
public:
    int arraySign(vector<int>& nums) {
        int len=nums.size();
        int n=0;
        int p=0;
        int z=0;
        for(int i=0;i<len;i++)
        {
            if(nums[i]==0)
            {
                 z++;
            }
            if(nums[i]>0)
            {
                p++;
            }
            if(nums[i]<0)
            {
                n++;
            }
        }
        if(z!=0)
        {
            return 0;
        }
        else
        {
            if(n==0)
            {
                return 1;
            }
            else
            {
                if(n%2)
                {
                    return -1;
                }
                else
                {
                    return 1;
                }
            }
        }
    }
};