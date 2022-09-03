class Solution {
public:
     void recur(int n, int k, int cnt, int num, vector<int> &ans){
        if(cnt == n)
        {
            ans.push_back(num);
            return ;
        }
        for(int i = 0; i < 10; i++)
        {
            if(cnt == 0 && i == 0) 
                continue;
            if(cnt == 0){
                recur(n, k, cnt+1, i, ans);
                continue;
            }
            int ld = num%10;
            if(abs(ld-i) == k) recur(n, k, cnt+1, num*10+i, ans);
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> ans;
        recur(n, k, 0, 0, ans);
        return ans;
    }
};