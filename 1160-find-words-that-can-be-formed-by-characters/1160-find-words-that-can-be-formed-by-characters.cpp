class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> alp(26, 0);
        for(char c : chars) alp[c - 'a']++;
        
        int ans = 0;
        for(auto w : words){
            vector<int> cur = alp;
            bool ok = true;
            for(char c : w)
                if(--cur[c - 'a'] == -1){ 
                    ok = false;
                    break;
                }
            if(ok) ans += w.size(); 
        }
        return ans;
    }
};