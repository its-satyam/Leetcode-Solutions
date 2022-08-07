class Solution {
public:
    vector<vector<int>> result;
    void subsets(vector<int> &candidates, int target, int i, int sum, vector<int> &curr)
    {
        if(sum == target)
        { 
            result.push_back(curr);
            return;
        }
        if(i == candidates.size() || sum > target)
            return;
        curr.push_back(candidates[i]);
        subsets(candidates, target, i, sum+candidates[i], curr);
        curr.pop_back();
        subsets(candidates, target, i+1, sum, curr);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<int> curr;
        subsets(candidates, target, 0, 0, curr);
        return result;
    }
};