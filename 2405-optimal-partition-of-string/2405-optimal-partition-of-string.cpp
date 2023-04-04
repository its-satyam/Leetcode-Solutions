class Solution {
public:
    int partitionString(string str) {
        bool found[26]{};
        int res = 1;
        for (char c: str) {
            if (found[c-'a']) {
                // Because a duplicate appeared, we must begin a new substring
                ++res;
                memset(found, 0, sizeof found);
            }
            found[c-'a'] = true;
        }
        return res;
    }
};