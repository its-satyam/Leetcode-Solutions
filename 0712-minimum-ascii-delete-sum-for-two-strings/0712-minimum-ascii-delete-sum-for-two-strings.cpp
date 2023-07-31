class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        int m=s1.length();
        int n=s2.length();

        int dp[m+1][n+1];
        memset(dp,0,sizeof(dp));

        for(int i=1; i<m+1; i++) {
            for(int j=1; j<n+1; j++) {
                if(s1[i-1] == s2[j-1]) {
                    dp[i][j] = s1[i-1]+dp[i-1][j-1];
                } else {
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
                }
            }
        }

        return calAcs(s1+s2)-2*dp[m][n];
    }

    int calAcs( string s) {
        return accumulate(s.begin(), s.end(), 0);
    }

};