class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int c=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(c==nums[i])
        //     {
        //         c++;
        //     }
        //     else
        //         break;
        // }
        // return c;
        int n=nums.size();
        int c=(n*(n+1))/2;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        return c-sum;
    }
};