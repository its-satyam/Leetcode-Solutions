class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        // int n=nums.size();
        // vector<int> ans(2*n);
        // for(int i=0;i<n;i++)
        // {
        //     ans[i]=nums[i];
        // }
        // int k=0;
        // for(int i=n;i<2*n;i++)
        // {
        //     ans[i]=nums[k];
        //     k++;
        // }
        // return ans;
        
        nums.insert(nums.end(),nums.begin(),nums.end());
            return nums;
    }
};