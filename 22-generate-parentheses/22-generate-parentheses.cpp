class Solution {
public:
    vector<string>ans;  //result vector
    void solve(int n, string s, int open_count, int close_count){
        if(open_count == n && close_count == n)   //If the parentheses counts are equal to the given n, then simple push the string to the result vector
            ans.push_back(s);
        if(open_count < n)  //If open parentheses are less than n, call the function again with updated params
            solve(n, s + "(", open_count + 1, close_count);
        if(close_count < open_count) //If close parentheses are less than open parentheses, call the function with updated params
            solve(n, s + ")" , open_count, close_count + 1);
    }
    vector<string> generateParenthesis(int n) {
        string s = ""; //Initializing empty string
        solve(n,s,0,0); //Calling the helper function
        return ans;
    }
};