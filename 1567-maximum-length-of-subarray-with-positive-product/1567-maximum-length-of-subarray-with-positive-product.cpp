class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        int neg = 0;
        int pos = 0;
        int ans = 0;
        for(int x : nums){
            if (x==0){
                pos = 0;
                neg = 0;
            }
             if (x<0){
				int temp = pos;
                pos = neg ? neg + 1 : 0;
                neg = temp + 1;
            } 
            if (x>0){
				if (neg) 
                    neg++;
                pos++;
            }    
            ans = max(ans, pos);
        }
        return ans;
 
    }
};