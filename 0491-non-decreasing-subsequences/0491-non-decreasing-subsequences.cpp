class Solution {
public:
   void LeetCode(vector<int>& nums, vector<vector<int>>& vec, vector<int>& temp, int index){
        if(index >= nums.size()){
            if(temp.size() > 1)
                vec.push_back(temp);
            return;
        }
        if(index==0 || temp.size()==0 || nums[index] >= temp[temp.size()-1]){
            temp.push_back(nums[index]);
            LeetCode(nums, vec, temp, index+1);
            temp.pop_back();
        }
        if(temp.size()==0 || temp[temp.size()-1]!=nums[index]){
            LeetCode(nums, vec, temp, index+1);
        }
}
	
vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<vector<int>> vec;
        vector<int> temp;
        LeetCode(nums, vec, temp, 0);
        return vec;
}
};