class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> s;
        int j = 0;
        for(int i = 0; i<nums.size(); i++){
            string str = "";
            while(i + 1 < nums.size() && nums[i+1] == nums[i]+1 ){
                i++;
            }
            if(nums[i] == nums[j]) str = to_string(nums[j]);
            else str = to_string(nums[j]) + "->" + to_string(nums[i]) ;
            j = i+1;

            s.push_back(str);
        }
        return s;
    }
};