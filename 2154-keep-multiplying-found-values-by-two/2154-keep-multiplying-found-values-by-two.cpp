class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        // for(int i=0;i<n;i++)
        // {
        //     if(nums[i]==original)
        //         original=2*original;
        // }
        int i=0;
        label: if(nums[i++]==original)
            original=2*original;
            if(i<n)
                goto label;
        return original;
    }
};