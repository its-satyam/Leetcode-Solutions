class Solution {
public:
    int specialArray(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        int l=0;
        int h=nums.size()-1;
        int size=nums.size();
        int prev=-1;
       for(int i=0;i<nums.size();i++)
       {
           if(prev!=nums[i])
           {
           if(size-i==nums[i])
               return nums[i];
               if(size-i<nums[i] && size-i>prev)
                   return size-i;
           }
           prev=nums[i];
       }
        return -1;
    }
};