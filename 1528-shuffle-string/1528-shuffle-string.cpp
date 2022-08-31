class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string shuffled;
        shuffled.resize(s.size());
        for(int i = 0; i != s.size(); i++) 
            shuffled[indices[i]] = s[i];
        return shuffled;
    }
};