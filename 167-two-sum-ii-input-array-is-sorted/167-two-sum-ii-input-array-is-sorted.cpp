class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target)
    {
        /*vector<int> ans;
		unordered_map<int, int> map;
		for(int i=0; i<numbers.size(); i++)
        {
			if(map.find(target - numbers[i]) != map.end())
            {
				ans.push_back(map[target - numbers[i]]+1);
				ans.push_back(i+1);
				return ans;
			}
			else 
				map[numbers[i]] = i;
		}
		return ans;*/
        int low = 0,high = numbers.size()-1;
        vector<int>ans(2);
        while(low<=high){
        if(numbers[low]+numbers[high]==target)
        {
            ans[0] = low+1;
            ans[1] = high+1;
            break;
        }
        else if(numbers[low]+numbers[high]>target)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return ans;

    }
};