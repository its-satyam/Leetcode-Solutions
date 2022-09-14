class Solution {
public:
    int countPrefixes(vector<string>& w, string s) {
        int ct=0;
        for(int i=0; i<w.size(); i++){
            if(s.substr(0,w[i].length())==w[i]) 
                ct++;
        }
        return ct;
    }
};