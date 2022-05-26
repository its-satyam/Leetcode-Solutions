class Solution {
public:
    int hammingWeight(uint32_t n) {
       //  int ans=0;
       //  while(n){
       //      n&=n-1;
       //      ans++;
       //  }                           
       // return ans;
        
        int ans=0;
        while(n>0)
        {
            ans+=(n&1);
            n>>=1;
        }
        return ans;
    }
};