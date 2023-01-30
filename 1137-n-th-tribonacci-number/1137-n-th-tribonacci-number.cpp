class Solution {
public:
      int tribonacci(int n) 
    {
        if(!n) 
            return 0;
        if(n < 3)
            return 1;
        vector<int> rez(n+1);
        rez[0]=0;
        rez[1]=1;
        rez[2]=1;
        for(int i=3;i<=n;i++)
            rez[i] = rez[i-2]+rez[i-1]+rez[i-3];
        return rez[n];
    }
};