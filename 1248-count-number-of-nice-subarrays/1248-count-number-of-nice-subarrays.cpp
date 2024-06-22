class Solution {
public:
       int numberOfSubarrays(vector<int>& nums, int k) {
       vector<int> v;
       v.push_back(-1);
         for(int i=0;i<nums.size();i++)
        {
           if(nums[i]%2==1)
           v.push_back(i); 
        }
        v.push_back(nums.size());
        int ans=0;
       
        for(int i=1;i<v.size()-k;i++)
        {
            int j=k+i-1;
            if(j>v.size()-2)
            break;
         int left= v.at(i)-v.at(i-1);
         int right=v.at(j+1)-v.at(j);
         ans+=left*right;
         
         
        }
        return ans;
    }
};