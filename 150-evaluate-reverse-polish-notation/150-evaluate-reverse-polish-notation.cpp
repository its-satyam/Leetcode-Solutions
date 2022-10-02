class Solution {
public:
    int evalRPN(vector<string>& tokens) {
         stack<long long int> st;
        for(long long int i=0;i<tokens.size();i++)
        {
            if(tokens[i]!="*" && tokens[i]!="-" && tokens[i]!="+" && tokens[i]!="/")
            {
                long long int num=stoi(tokens[i]);
                st.push(num);
            }
            else
            {
                if(tokens[i]=="+")
                {
                    long long int b=st.top();
                    st.pop();
                    long long int c=st.top();
                    st.pop();
                    c=b+c;
                    st.push(c);
                }
                else if(tokens[i]=="-")
                {
                    long long int b=st.top();
                    st.pop();
                    long long int c=st.top();
                    st.pop();
                    c=c-b;
                    st.push(c);
                }
                else if(tokens[i]=="*")
                {
                    long long int b=st.top();
                    st.pop();
                    long long int c=st.top();
                    st.pop();
                    c=c*b;
                    st.push(c);
                }
                else
                {
                    long long int b=st.top();
                    st.pop();
                    long long int c=st.top();
                    st.pop();
                    c=c/b;
                    st.push(c);
                }
            }
        }
        return st.top();
    }
};