class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> rep;
        int n=nums.size();
        rep.assign(n,0);
        for(int i=0;i<nums.size();i++)
        {
            rep[nums[i]-1]++;
        }
        vector<int> ans;
        int a=0,b=0;
        for(int i=0;i<rep.size();i++)
        {
            if(rep[i]==2)
                a=i+1;
            if(rep[i]==0)
                b=i+1;
        }
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};