class Solution {
public:
    string breakPalindrome(string p) {
        bool didChange = false;
        int lmt = p.size() / 2;
        for (int i = 0; i < lmt; i++) 
            if (p[i] != 'a') 
            {
                p[i] = 'a';
                didChange = true;
                break;
            }
        if (!didChange) 
            p[p.size() - 1] = 'b';
        return p.size() > 1 ? p : "";
    }
};