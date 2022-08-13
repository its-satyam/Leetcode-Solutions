class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
         vector<int> res(num_people);
        for ( int index = 0; candies > 0; ++index, candies -= index )
            res[index % num_people] += min(index + 1, candies);
        return res;
    }
};