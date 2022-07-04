class Solution {
public:
    string decodeString(string s) {
        stack<string> res;
        stack<int> count;
        string curr="";
        int num=0;
        for(int i=0;i<s.size();i++){
            if(isalpha(s[i])){
                curr+=s[i];
            }
            if(isdigit(s[i])){
                num=num*10+(s[i]-'0');
            }
			 if(s[i]=='['){
                res.push(curr);
                count.push(num);
                num=0;
                curr="";
            }
            if(s[i]==']'){
                string left=res.top();
                int to_repeat=count.top();
                count.pop();
                res.pop();
                string new_string=left;
                for(int i=0;i<to_repeat;i++)
                    new_string+=curr;
                curr=new_string;
            }
        }
        return curr;
    }
};