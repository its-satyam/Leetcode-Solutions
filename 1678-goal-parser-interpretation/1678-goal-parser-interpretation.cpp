class Solution {
public:
    string interpret(string command) {
        int n=command.length();
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(command[i]=='G')
                ans+='G';
            else if(command[i]=='(' && command[i+1]==')')
                ans+='o';
            else if(command[i]=='(' && command[i+1]=='a')
                ans+="al";
        }
        return ans;
    }
};