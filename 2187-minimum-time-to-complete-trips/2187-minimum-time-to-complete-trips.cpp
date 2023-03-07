class Solution {
public:
    bool isPossible(vector<int>& time, int totalTrips, long long mid)
    {
        long long count = 0;
        for(int i = 0; i < time.size(); i++)
        {
            count += mid / time[i];
            if(count >= totalTrips) return true;
        }
        return false;
    }
    long long minimumTime(vector<int>& time, int totalTrips)
    {
        long long low = 1;
        long long high = LLONG_MAX;
        long long ans;
        while(low <= high)
        {
            long long mid = low + (high - low) / 2;
            if(isPossible(time, totalTrips, mid))
            {
                ans = mid;
                high = mid - 1;
            } 
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};