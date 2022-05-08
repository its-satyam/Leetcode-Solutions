class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==1 || n==0)
            return n;
        int i,j=1;
        for(i=1;i<nums.size();i++)
        {
            if(nums[i]!=nums[i-1])
                nums[j++]=nums[i];
        }
        return j;
    }
};