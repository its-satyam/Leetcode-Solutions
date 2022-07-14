class Solution {
public:
    uint32_t reverseBits(uint32_t n) 
    {
        uint32_t result=0;
        int i=0;
        while(n)
        {
            int ans=n&1;
            if(ans)
                result+=(ans)*pow(2,31-i);
            i++;
            n=n>>1;
        }
        return result;
    }
};