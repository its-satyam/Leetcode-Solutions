class Solution {
public:
    int countOdds(int low, int high) {
        // int n=0;
        // for(int i=low;i<=high;i++)
        //     if(i%2!=0)
        //         n++;
        // return n;
        
        int dif = high-low;
        if(low%2!=0 || high%2!=0)
        {
            return (dif/2)+1;
        }
        return dif/2;
    }
};