class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
         int n = nums.size() / 2;
        sort(nums.begin(), nums.end());
        
        int count = 0;
        
        for(int x = 0; x < nums.size(); x += 2){
            count += min(nums[x], nums[x+1]);
        }
        
        return count;
    }
};