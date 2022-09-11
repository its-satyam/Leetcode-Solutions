class Solution {
public:
    vector<int> replaceElements(vector<int>& a) {
        int n = a.size();
        if(n==1) return {-1};
        int g = a[n-1];
        vector<int> v(n,-1);
        for(int i=n-2;i>=0;i--)
        {
            v[i] = g;
            g = max(g,a[i]);
        }
        return v;
    }
};