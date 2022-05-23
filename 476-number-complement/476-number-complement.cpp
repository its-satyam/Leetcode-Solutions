class Solution {
public:
    int findComplement(int num) {
        vector<int> arr;
        while(num>0) {
            arr.push_back(num % 2);
            num /= 2;
        }
        int sz = arr.size();
        reverse(arr.begin(), arr.end());
        for(int i = 0; i<sz; ++i) {
              arr[i] = !arr[i];
        }
        long long t = 1;
        for(int i = sz-1; i>=0; --i) {
            num += arr[i] * t;
            t *= 2;
        }
        return num;
    }
};