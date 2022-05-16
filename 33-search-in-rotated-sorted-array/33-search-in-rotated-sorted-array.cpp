class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int mid=0;
        int b=0,e=n-1;
        while(b<=e)
        {
            mid=b+(e-b)/2;
            if(nums[mid]==target)
                return mid;
            if(nums[b]<=nums[mid])
            {
                if(target>=nums[b] && target<=nums[mid])
                    e=mid;
                else
                    b=mid+1;
            }
            else if(nums[b]>nums[mid])
            {
                if(target>=nums[mid] && target<=nums[e])
                    b=mid+1;
                else
                    e=mid;
            }
        }
        return -1;
    }
};