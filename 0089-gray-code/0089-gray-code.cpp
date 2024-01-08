class Solution {
public:
    vector<int> grayCode(int n) {
    //     vector<string> graystring=generate(n);
    //     vector<int> ans;
    //     for(auto i:graystring)
    //     {
    //         ans.push_back(stoi(i,0,2));
    //     }
    //     return ans;
    // }
    // vector<string> generate(int n)
    // {
    //     if(n==1)
    //         return {"0","1"};
    //     vector<string> ans;
    //     vector<string> temp = generate(n-1);
    //     for(int i=0;i<temp.size();i++)
    //         ans.push_back("0"+temp[i]);
    //     for(int i=temp.size();i>=0;i++)
    //         ans.push_back("1"+temp[i]);
    //     return ans;
    
        vector<int> v;

        for(int i = 0; i < (1 << n); i++)
            v.push_back((i ^ (i >> 1)));

        return v;
    }
    
    
};