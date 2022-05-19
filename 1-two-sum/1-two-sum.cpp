class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /* int i,j,n;
        n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]==target)
                    return{i,j};
            }
        }
        return{}; */
        
        vector<int> ans;
		unordered_map<int, int> map;

		for(int i=0; i<nums.size(); i++){
			if(map.find(target - nums[i]) != map.end()){
				ans.push_back(map[target - nums[i]]);
				ans.push_back(i);
				return ans;
			}
			else 
				map[nums[i]] = i;
		}

		return ans;
            
    }
};