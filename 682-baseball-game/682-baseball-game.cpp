class Solution {
public:
    int calPoints(vector<string>& ops) {
         stack <int> st;
        int sum = 0;
        
        for(int i = 0; i < ops.size(); i++){
                
                if(ops[i] == "+"){
                        
                        int val1,val2;
                        val1 = st.top();
                        st.pop();
                        val2 = st.top();
                        st.pop();
                        sum += (val1 + val2);
                        st.push(val2);
                        st.push(val1);
                        st.push(val2 + val1);
                }
                        else if(ops[i] == "D"){    
                        int val = st.top();
                        st.push( val*2 );
                        sum += 2*val;
                        }
                        else if(ops[i] == "C"){                
                        sum -= st.top();
                        st.pop();
                }
                else 
                    st.push(stoi(ops[i])),sum += stoi(ops[i]);
        }
        return sum;
    }
};