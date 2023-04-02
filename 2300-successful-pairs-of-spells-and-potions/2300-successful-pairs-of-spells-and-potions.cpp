class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        // int n=spells.size();
        // int m=potions.size();
        // vector<int> pairs;
        // for(int i=0;i<n;i++)
        // {
        //     int c=0;
        //     for(int j=0;j<m;j++)
        //     {
        //         long long s=spells[i]*potions[j];
        //         if(s>=success)
        //             c++;
        //     }
        //     pairs.push_back(c);
        // }
        // return pairs;
        
        sort(potions.begin(), potions.end());
        vector<int> res;
        for (int spell: spells) {
            long potion_needed = (success + spell - 1) / spell;
            auto it = lower_bound(potions.begin(), potions.end(), potion_needed);
            res.push_back(potions.end() - it);
        }
        return res;
    }
};