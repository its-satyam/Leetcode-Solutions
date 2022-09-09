class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
       sort(nums.begin(), nums.end());
		int ans = 0;
		int n = nums.size();

		for(int i=0 ; i<n-1 ; ){
			if(nums[i] == nums[i+1]){
				ans++;
				i += 2;
			}
			else{
				i++;
			}
		}

		return {ans, n - (ans*2)};
    }
};