class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int c=0;
            int j=nums[i];
            while(j>0)
            {
                j=j/10;
                c++;
            }
            if(c%2==0)
                ans++;
        }
        return ans;
    }
};