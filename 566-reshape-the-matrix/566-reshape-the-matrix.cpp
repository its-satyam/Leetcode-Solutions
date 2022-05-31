class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
          vector<vector<int>> ans(r, vector<int>(c));        // Declaring 2D vector of size r x c
        int m= mat.size();                                   //Row size
        int n= mat[0].size();                                // Col size
        
        if(m*n != r*c) return mat;  
                            //if size is not equal then can't reshape perfectly ,so return as it is.
        for(int i=0; i<m*n ;i++){                              // else reshape it
            ans[i/c][i%c] = mat[i/n][i%n];                     //Formula for reshape
        }
        return ans;
    }
};