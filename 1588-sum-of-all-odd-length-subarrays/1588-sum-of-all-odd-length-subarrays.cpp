class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        // int appear = 0, res = 0, n = arr.size()-1;
        // for (int i = 0; i <= n; i++) {
        //     appear += (n-i)/2 + 1;
        //     res += appear*arr[i];
        //     appear -= (i-0)/2 + 1;
        // }
        // return res;
        
        int n=arr.size(),res=0;
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=i;j<n;j++)
            {
                sum+=arr[j];
                if((j-i)%2==0)
                    res+=sum;
            }
        }
        return res;
    }
};