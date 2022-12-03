class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        // unordered_map<string,int> m;
        // int c=0;
        // for(int i=0;i<words1.size();i++)
        //     m[words1[i]]++;
        // for(int i=0;i<words2.size();i++)
        //     m[words2[i]]++;
        // for(auto i:m)
        //     if(i.second==2)
        //         c++;
        // return c;
        
        unordered_map<string, int> m;
        for (auto &w : words1)
            ++m[w];
        for (auto &w : words2)
            if (m[w] < 2)
                --m[w];
        return count_if(begin(m), end(m), [](const auto &p){ return p.second == 0; });
    }
};