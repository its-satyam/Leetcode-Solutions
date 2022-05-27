class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        int maxi=0;
        vector<bool> result(n);
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,candies[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(candies[i]+extraCandies>=maxi)
                result[i]=true;
        }
        return result;
    }
};