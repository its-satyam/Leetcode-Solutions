class Solution {
public:
   int minFlipsMonoIncr(string s) {
        int n = s.size();
        int z[n] ;
        int o[n] ;
        for(int i=0;i<n;++i)
        {
            o[i] = z[i] = 0;
        }
        z[0] = (s[0] == '0');
        for(int i=1;i<n;++i)
        {
            z[i] = z[i-1] + (s[i]=='0');
        }
        for(int i=n-2;i>=0;i--)
        {
            o[i] = (s[i+1] == '1')+ o[i+1]; 
        }
        int maxi = INT_MAX;
        for(int i=0;i<n;++i)
        {
            // all lefts are zeros and all right 1
            maxi = min(maxi,i+1-z[i] + (n-i-1-o[i])); // ones to the left = i+1-z[i] and zeros on right = n-i-1-o[i]

            // all zeros
            maxi = min(maxi,i+1-z[i]+o[i]) ; // ones(left) = i+1-z[i] , ones(right) = O[i]

            // all ones
            maxi = min(maxi,z[i] + n-i-1-o[i]); // zeros(left) = z[i] and zeros(right) = n-i-1-o[i]
        }
        return maxi;

        
    }
};