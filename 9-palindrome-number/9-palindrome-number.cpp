class Solution {
public:
    bool isPalindrome(int x) {
       int r,s=0;
        if(x<0||(x%10==0&&x!=0))
            return false;
        while(x>s)
        {
            r=x%10;
            s=r+(s*10);
            x=x/10;
        }
        return x==s || x==s/10;
    }
};