class Solution {
public:
    string sortSentence(string s) {
        int i = 0;
        int a = count(s.begin(),s.end(),' ');
        vector<string>vec(a+1);
        while(i<s.size())
        {
            string s1="";
            while(!isdigit(s[i]))
            {
                s1 = s1 + s[i];
                i++;
            }
            int c = s[i]-'0';
            i=i+2;
            vec[c-1]=s1;
        }
        s = "";
        for(int i=0;i<a;i++)
        {
            s = s + vec[i] + " ";
        }
        s = s + vec[a];
        return s;
    }
};