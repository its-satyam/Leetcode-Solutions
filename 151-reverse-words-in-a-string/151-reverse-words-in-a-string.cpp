class Solution {
public:
    string reverseWords(string s) {
        string res="";
        int n=s.length();
        string temp;
        for(int i=n-1;i>=0;i--){
            if(s[i]==' ')
            {
                if(temp!="")
                {
                    res=res+temp+" ";
                    temp="";
                }
            }
            else
                temp=s[i]+temp;
        }
		res=res+temp;
        if(res[res.length()-1]==' ')
            res.erase(res.length()-1);
        return res;
    }
};