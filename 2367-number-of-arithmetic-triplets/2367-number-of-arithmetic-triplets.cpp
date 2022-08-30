class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        // int count=0;
        // for(int i=0;i<nums.size()-2;i++)
        // {
        //     for(int j=i+1;j<nums.size()-1;j++)
        //     {
        //         for(int k=j+1;k<nums.size();k++)
        //         {
        //             if(nums[j] - nums[i] == diff && nums[k] - nums[j] == diff)
        //                 count++;
        //         } 
        //     }
        // }
        // return count;
        
        int cnt = 0;
        unordered_set<int> set;
        for(int i=0;i<nums.size();i++)
        {
            set.insert(nums[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(set.find(nums[i]+diff)!=set.end() && set.find(nums[i]+diff+diff)!=set.end())
            {
                cnt++;
            }
        }
        return cnt;
    }
};