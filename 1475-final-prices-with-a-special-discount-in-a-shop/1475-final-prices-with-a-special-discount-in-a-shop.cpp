class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> ans;
        int n=prices.size();
        ans.push_back(prices[n-1]);
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int f=0;
                if(prices[j]<=prices[i])
                {
                    prices[i]-=prices[j];
                    f=1;
                }
                if(f==1)
                    break;
            }
        }
        return prices;
    }
};