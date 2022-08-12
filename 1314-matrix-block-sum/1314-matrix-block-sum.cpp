class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int m=mat.size(), n=mat[0].size();
        //calculating prefix-sum of matrix - prefix[i][j] = prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1]
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i>0) mat[i][j] += mat[i-1][j];
                if(j>0) mat[i][j] += mat[i][j-1];
                if(i>0 && j>0) mat[i][j] -= mat[i-1][j-1];
            }
        }
        vector<vector<int>> ans(m, vector<int>(n));
        
        //calculating matrix block sum
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int r0=max(0, i-k), c0=max(0, j-k), r1=min(m-1, i+k), c1=min(n-1, j+k);
                
                ans[i][j] = mat[r1][c1];
                if(r0>0) ans[i][j] -= mat[r0-1][c1];
                if(c0>0) ans[i][j] -= mat[r1][c0-1];
                if(r0>0 && c0>0) ans[i][j] += mat[r0-1][c0-1];
            }
        }
        
        return ans;
        
    }
};