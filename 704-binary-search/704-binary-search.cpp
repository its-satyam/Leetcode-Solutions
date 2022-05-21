class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int first=0,last=n-1;
        int mid;
        while(first<=last)
        {
            mid=first+(last-first)/2;
            if(target==nums[mid])
                return mid;
            if(target>nums[mid])
                first=mid+1;
            else
                last=mid-1;
        }
        return -1;
    }
};