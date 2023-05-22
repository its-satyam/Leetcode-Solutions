class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         vector<int> ans;
        unordered_map<int,int> freq;
        priority_queue <pair<int,int>> Q;
    int n=nums.size();
    
    for(int i=0;i<n;i++)    freq[nums[i]]++;       

    for(auto it : freq)    Q.push({it.second, it.first});     
   
    while(k--)     
    {
        auto temp = Q.top();
        ans.push_back(temp.second);
        Q.pop();
    }
    return ans;
    }
};