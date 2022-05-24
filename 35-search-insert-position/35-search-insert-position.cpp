class Solution {
public:
    int searchInsert(vector<int>& nums, int target)
    {
        int low=0,high=nums.size()-1,mid;
        while(low<=high)
        {
            mid=(low+high)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target)
                low=mid+1;
            else
                high=mid-1;
        }
        if(nums[mid]<target)
            return mid+1;//return mid+1 as the insertion should be done ahead of mid ie target>nums[mid]
        else
            return mid;//return mid as its the required index to insert target
    }
};