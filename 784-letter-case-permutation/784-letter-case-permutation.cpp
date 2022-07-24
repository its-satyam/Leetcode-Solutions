class Solution {
public:
    void solve(int index,int n,string &s,vector<string>&v){
        if(index==n){
            v.push_back(s);
            return;
        }
        if(s[index]-'0'>=0 && s[index]-'0'<=9){
            solve(index+1,n,s,v);
        }
        else{
            solve(index+1,n,s,v);
            s[index]=islower(s[index])?toupper(s[index]):tolower(s[index]);
            solve(index+1,n,s,v);
            s[index]=islower(s[index])?toupper(s[index]):tolower(s[index]);
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>v;
        solve(0,s.length(),s,v);
        return v;    
    }
};