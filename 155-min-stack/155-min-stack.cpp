class MinStack {
public:
    vector<int> s;
    int n=-1;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push_back(val);
        n++;
    }
    
    void pop() {
        s.pop_back();
        n--;
    }
    
    int top() {
        return s[n];
    }
    
    int getMin() {
        return *min_element(s.begin(),s.end());

    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */