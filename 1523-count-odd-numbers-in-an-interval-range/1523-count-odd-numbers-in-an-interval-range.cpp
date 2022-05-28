class Solution {
public:
    int countOdds(int low, int high) {
        int dif = high-low;
        if(low%2!=0 || high%2!=0)
        {
            return (dif/2)+1;
        }
        return dif/2;
    }
};