class Solution {
public:
    int maxValue(int n, int index, int maxSum) {
        long long largest = 1;
        long long sum = 1*n;
        long long amount = 0;
        long long amount2 = 1;
        for(int i = 2; sum < maxSum; i++) {
            sum += amount;
            if(amount != index) {
                amount++;
            }
            sum += amount2;
            if(amount2 != n-index) {
                amount2++;
            }
            if(amount == index && amount2 == n-index) {
                i += ((maxSum-sum)/(amount+amount2));
                sum += ((maxSum-sum)/(amount+amount2))*(amount+amount2);
            }
            if(sum <= maxSum) {
                largest = i;
            }
        }
        return largest;
    }
};