class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> res(num_people, 0); // start with zero candies for each person
        int i=0;
        while (candies > 0) // while there are more candies to distribute
        {
            res[i%num_people]+=i+1;
            candies-=i+1;
            i++;
        }
        if (candies < 0) // if the last person got more than the candies we had left
            res[(i-1)%num_people] -= abs(candies);
        return res;
    }
};