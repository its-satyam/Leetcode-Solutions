class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> ans;
        stack<int> t1;
        stack<int> t2;
        int n=nums.size();
        for(int i=0;i<n;i++)
            if(nums[i]%2==0)
                t1.push(nums[i]);
            else
                t2.push(nums[i]);
        for(int i=0;i<n;i++)
            if(i%2==0)
            {
                ans.push_back(t1.top());
                t1.pop();
            }
            else
            {
                ans.push_back(t2.top());
                t2.pop();
            }
        return ans;
    }
};