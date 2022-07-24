class Solution {
public:
    int rob(vector<int>& nums) {
       int n = nums.size();
        int even = 0;
        int odd = 0;
        for(int i =0;i<n;i++){
        
            if(i%2 == 0){
                even += nums[i];
                even = even > odd ? even : odd;
            }
            else{
                odd += nums[i];
                odd = even > odd ? even : odd;
            }     
        }
        return even > odd ? even : odd;
    }
};