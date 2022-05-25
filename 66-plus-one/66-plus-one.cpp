class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         int c=0;
        int n=digits.size();
        for(int i=n-1;i>=0;i--)
        {
            if(i==n-1)
            {
                digits[i]=digits[i]+1;
                if(digits[i]>9)
                {
                    c=digits[i]/10;
                    digits[i]=digits[i]%10;
                }
            }
            else
            {
                digits[i]=digits[i]+c;
                if(digits[i]>9)
                {
                    c=digits[i]/10;
                    digits[i]=digits[i]%10;
                }
                else
                    c=0;
            }
        }
        if(c>0)
        {
            digits.insert(digits.begin(),c);
        }
        return digits;
    }
};