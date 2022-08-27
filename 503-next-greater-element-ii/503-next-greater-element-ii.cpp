class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int> res(n,-1);
        stack<int> st; // going to store pervious max element index
        
        //traversing nums
        
        for(int i=0;i<n*2;i++)
        {
    /*now here I keep checking that,, DO THIER IS any element in nums which is GREATER THAN the element in the stack (PREVIOUSLY processed) through index */
            
            while(!st.empty() and nums[st.top()] < nums[i%n])
            {
                // assinging Next GREATER ELEMENT to index of res
                res[st.top()]  = nums[i%n];
                
                st.pop();
            }
            st.push(i%n);
        }
        
        return res;
    }
};