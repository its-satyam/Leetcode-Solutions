class Solution {
void rotate(vector<vector<int>>& mat) {
        reverse(mat.begin(), mat.end());
        for (int i = 0; i < mat.size(); ++i) {
            for (int j = i + 1; j < mat[i].size(); ++j) {
                swap(mat[i][j], mat[j][i]);
            }
        }
    }
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for (int i = 0; i < 4; ++i){
            rotate(mat);
            if (mat == target) return true;
        }
        return false;
    }
};