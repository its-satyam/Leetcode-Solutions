class Solution {
public: 
    int digits(int n)
    {
        int temp;
        int sum=0;
        while(n!=0)
        {
            temp = n%10;
            sum+=(temp*temp);
            n=n/10;
        }
        return sum;
    }
    
    bool isHappy(int n) {
         for(int i=1;i<=10;i++)
        {
            n = digits(n);
        }
        if(n!=1)
        {
            return false;
        }
        return true;
    }
};