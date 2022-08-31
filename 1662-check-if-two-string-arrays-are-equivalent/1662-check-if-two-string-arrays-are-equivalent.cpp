class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n=word1.size();
        int m=word2.size();
        string str_1="",str_2="";
        for(int i=0;i<n;i++)
        {
            str_1+=word1[i];
        }
        for(int i=0;i<m;i++)
        {
            str_2+=word2[i];
        }
        if(str_1 == str_2) 
            return true;
        else
            return false;
    }
};