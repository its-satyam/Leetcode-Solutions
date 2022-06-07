class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int mid=0;
        long long int l=0,u=num;
        while(l<=u)
        {
            mid=l+(u-l)/2;
            long long int x=mid*mid;
            if(x==num)
                return true;
            else if(x>num)
                u=mid-1;
            else
                l=mid+1;
        }
        return false;
    }
};