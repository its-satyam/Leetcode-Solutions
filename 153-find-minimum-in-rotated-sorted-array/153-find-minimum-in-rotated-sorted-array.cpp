class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int mid=0;
        int b=0,e=n-1;
        while(b<=e)
        {
            mid=b+(e-b)/2;
            if(nums[mid]>=nums[e])
                b++;
            else
                e=mid;
        }
        return nums[mid];
    }
};