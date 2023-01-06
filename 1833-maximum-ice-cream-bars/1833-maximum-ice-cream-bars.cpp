class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
       int arr[100001]={0};
    
    for(int i=0;i<costs.size();i++)
    {
        arr[costs[i]]++;
    }
    int count = 0;
    for(int i=1;i<=100000;i++)
    {
        if(arr[i])
        {
            long long curr = (long long)arr[i]*i;
            if(curr<=coins)
            {
                count += arr[i];
                coins -= curr;
            }
            else
            {
                count += (coins/i);
                break;
            }
        }
    }
    return count; 
    }
};