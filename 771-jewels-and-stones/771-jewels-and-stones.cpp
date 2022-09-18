class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n=jewels.length();
        int m=stones.length();
        int ans=0;
        
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         if(jewels[i]==stones[j])
        //             ans++;
        //     }
        // }
        
        for( char c: stones)
        {
            if(jewels.find(c)!=string::npos)
            ans++;
        }
        return ans;
    }
};