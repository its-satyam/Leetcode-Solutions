class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        for(; left < right; right -= right & -right);
		return right;
    }
};