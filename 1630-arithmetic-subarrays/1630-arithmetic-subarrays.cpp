class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n  = nums.size();
        int m = l.size();
        vector <int> v;
        vector <bool> ans;
        for(int  i=0;i<m;i++)
        {
            for(int j=l[i];j<=r[i];j++)
                v.push_back(nums[j]);
            sort(v.begin(),v.end());
            int diff = v[1]-v[0];
            bool p = true;
            for(int k=1;k<v.size()-1;k++)
            {
                if(v[k+1]-v[k] == diff)
                    p = true;
                else
                {
                    p = false;
                    break;
                }
            }   
            if(p==true)
                ans.push_back(true);
            else
                ans.push_back(false);
            v.clear();
        }  
        return ans;
    }
};