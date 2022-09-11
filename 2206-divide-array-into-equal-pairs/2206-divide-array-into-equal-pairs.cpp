class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int f=0;
        for(int i=0;i<n-1;i+=2)
        {
            if(nums[i]!=nums[i+1])
                return false;
        }
        return true;
    }
};