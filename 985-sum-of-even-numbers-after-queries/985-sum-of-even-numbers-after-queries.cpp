class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
                sum+=nums[i];
        }
        int fs=0;
        vector<int> s;
        for(int i=0;i<queries.size();i++)
        {
            if(nums[queries[i][1]]%2==0)
            {
                if(queries[i][0]%2==0)
                    sum+=queries[i][0];
                else
                    sum-=nums[queries[i][1]];
            }
            else
            {
                if(queries[i][0]%2!=0)
                    sum+=queries[i][0]+nums[queries[i][1]];
            }
            fs=sum;
            s.push_back(fs);
            fs=0;
            nums[queries[i][1]]+=queries[i][0];
        }
        return s;
    }
};