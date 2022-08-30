class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        // int n=nums.size();
        // vector<int> ans(n);
        // for(int i=0;i<n;i++)
        // {
        //     int count=0;
        //     for(int j=0;j<n;j++)
        //     {
        //         if(i==j)
        //             continue;
        //         if(nums[j]<nums[i])
        //             count++;
        //     }
        //     ans[i]=count;
        // }
        // return ans;
        
        map<int,int> mp;    
        int n=nums.size();
        vector<int> snum=nums;
        
        sort(snum.begin(),snum.end());
        for(int i=n-1;i>=0;i--)
            mp[snum[i]]=i;
        
        for(int i=0;i<n;i++)
            nums[i]=mp[nums[i]];
        
        return nums;
    }
};