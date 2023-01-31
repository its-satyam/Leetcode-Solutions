class Solution {
public:
    string removeDuplicateLetters(string str) {
       vector<int> flag(26), lo(26);
        stack<char> st;
        
        for(int i=0; i<str.size(); i++) lo[str[i] - 97] = i;
        
        for(int i=0; i<str.size(); i++) {
            while(!st.empty() && str[i] < st.top() && !flag[str[i] - 97] && lo[st.top() - 97] > i) {
                flag[st.top() - 97] = 0;
                st.pop();
            }
            
            if(!flag[str[i] - 97]) {
                st.push(str[i]);
                flag[str[i] - 97] = 1;
            }
        }
        
        string ans;
        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};