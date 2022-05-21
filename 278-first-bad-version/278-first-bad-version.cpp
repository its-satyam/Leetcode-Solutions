// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int f=0,l=n-1;
        int mid;
        while(f<=l)
        {
            mid=f+(l-f)/2;
            if(isBadVersion(mid))
                l=mid-1;
            else
                f=mid+1;
        }
        return f;
    }
};