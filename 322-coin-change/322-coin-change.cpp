class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
//         sort(coins.begin(),coins.end());
//         int n=coins.size();
//         int count=0;
//         int i=n-1;
//         int flag=0;
//         if(amount==0)
//             return 0;
//         if(amount<coins[0])
//             return -1;
//         while(amount>=coins[0])
//         {
//             if(amount>=coins[i])
//             {
//                 amount=amount-coins[i];
//                 count++;
//             }
            
//                 i--;  
//         }
//         if(amount==0)
//             return count;
//         else
//             return -1;
        
        vector<int> dp(amount+1,amount+1);
        dp[0]=0;
        for(int coin : coins)
        {
            for(int i=coin;i<=amount;i++)
            {
                dp[i]=min(dp[i],dp[i-coin]+1);
            }
        }
        return dp[amount]<=amount ? dp[amount] : -1;
    }
};