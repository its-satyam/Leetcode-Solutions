class Solution {
public:
   string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](auto a, auto b) {
            return to_string(a) + to_string(b) > to_string(b) + to_string(a);
            // vector<int> av;
            // vector<int> bv;
            // while(a) {
            //     av.push_back(a % 10);
            //     a /= 10;
            // }
            // while(b) {
            //     bv.push_back(b % 10);
            //     b /= 10;
            // }
            // int i = av.size() - 1, j = bv.size() - 1;
            // int count = 0;
            // while(count != 3) {
            //     if (av[i] != bv[j]) return av[i] > bv[j];
            //     if (--i < 0) {
            //         i = av.size() - 1;
            //         ++count;
            //     }
            //     if (--j < 0) {
            //         j = bv.size() - 1;
            //         ++count;
            //     }
            // }
            // return true;
        });
        if (nums[0] == 0) return "0";
        stringstream res;
        copy(nums.begin(), nums.end(), ostream_iterator<int>(res, ""));
        return res.str();
    }
};