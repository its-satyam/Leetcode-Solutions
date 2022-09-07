class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        string ans = "";
        //store characters and their frequency in hashmap
        for(int i = 0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        //make a  max heap (max priority queue) of pairs and sort by max frequency in heap using pairs
        priority_queue<pair<int,char>> pq;
        for(auto i: mp)
        {
            pq.push({i.second,i.first});
        }
        //push characters to string till max heap is not empty 
        while(!pq.empty())
        {
            int n = pq.top().first;
            while(n--)
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};