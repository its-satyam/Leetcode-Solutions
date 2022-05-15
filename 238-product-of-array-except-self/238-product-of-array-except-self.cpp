class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> answer(n);
        int lsp=1;
        int rsp=1;
        for(int i=0;i<n;i++)
        {
            answer[i]=lsp;
            lsp*=nums[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            answer[i]*=rsp;
            rsp*=nums[i];
        }
        return answer;
    }
};