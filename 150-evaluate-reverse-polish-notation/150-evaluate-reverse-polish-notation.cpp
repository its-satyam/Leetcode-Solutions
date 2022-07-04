class Solution {
public:
    int evalRPN(vector<string>& tokens) {
         stack<int> st;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]!="*" && tokens[i]!="-" && tokens[i]!="+" && tokens[i]!="/")
            {
                int num=stoi(tokens[i]);
                st.push(num);
            }
            else
            {
                if(tokens[i]=="+")
                {
                    int b=st.top();
                    st.pop();
                    int c=st.top();
                    st.pop();
                    c=b+c;
                    st.push(c);
                }
                else if(tokens[i]=="-")
                {
                    int b=st.top();
                    st.pop();
                    int c=st.top();
                    st.pop();
                    c=c-b;
                    st.push(c);
                }
                else if(tokens[i]=="*")
                {
                    int b=st.top();
                    st.pop();
                    int c=st.top();
                    st.pop();
                    c=c*b;
                    st.push(c);
                }
                else
                {
                    int b=st.top();
                    st.pop();
                    int c=st.top();
                    st.pop();
                    c=c/b;
                    st.push(c);
                }
            }
        }
        return st.top();
    }
};