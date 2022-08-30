class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
         vector<int> v;
        v.push_back(first);
        for(auto i: encoded){
            v.push_back(i^first);
            first^=i;
        }
        return v;
    }
};