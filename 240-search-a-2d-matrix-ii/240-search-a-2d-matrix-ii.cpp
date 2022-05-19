class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        /* int n=matrix.size();
        int m=matrix[0].size();
        if(n==0 || m==0)
            return false;
        int i=n-1;
        int j=0;
        while(i>=0 && j<m)
        {
            if(matrix[i][j]==target)
                return true;
            else if(matrix[i][j]>target)
                i--;
            else
                j++;
        }
        return false; */
        
        bool flag=false;
        for(int i=0;i<matrix.size();i++)
        {
           if (binary_search(matrix[i].begin(),matrix[i].end(),target))
               flag=true;       
        }
        return flag;
    }
};