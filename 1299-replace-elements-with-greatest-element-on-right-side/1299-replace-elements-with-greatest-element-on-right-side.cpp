class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans(n,-1);
        int c=0;
        for(int i=0;i<n-1;i++)
        {
            c=0;
            for(int j=i+1;j<n;j++)
            {
                 c=max(c,arr[j]);
            }
            ans[i]=c;
            
        }
        return ans;
    }
};