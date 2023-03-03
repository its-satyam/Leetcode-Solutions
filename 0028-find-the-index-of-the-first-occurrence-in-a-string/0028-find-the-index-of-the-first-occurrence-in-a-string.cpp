class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        if(m>n)
            return -1;
        if(needle=="")
            return 0;
        int count=haystack.find(needle);
        return count;
    }
};