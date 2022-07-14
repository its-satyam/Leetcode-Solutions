class Solution {
public:
    vector<int> getRow(int rowIndex) 
    {
        vector<vector<int>> res;
        for(int i=0;i<=rowIndex;i++)
        {
            vector<int> temp;
            temp.push_back(1);
            for(int j=1;j<i;j++)
            {
                temp.push_back(res[i-1][j]+res[i-1][j-1]);
            }
            if(i>0)
            temp.push_back(1);
            res.push_back(temp);
        }
        return res[rowIndex];
    }
};