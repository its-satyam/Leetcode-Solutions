class Solution {
public:
    int findPoisonedDuration(vector<int>& ts, int duration) {
        int n=ts.size();
        int total=0;
        for(int i=0;i<n-1;i++)
        {
            if(ts[i+1]<=ts[i]+duration-1)
            {
                total+=ts[i+1]-ts[i];
            }
            else
                total+=duration;
        }
        total+=duration;
        return total;
    }
};