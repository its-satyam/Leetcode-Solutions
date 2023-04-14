class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n = pushed.size(), idx = 0;
        stack<int>s;
		
        for(auto &num : pushed){
            s.push(num);
			// after each push, pop all matching elements and increment popped index
            while(!s.empty() && s.top() == popped[idx])
                s.pop(), idx++;
        }
		// if stack is non-empty, it is invalid sequence
        return s.empty(); 
    }
};