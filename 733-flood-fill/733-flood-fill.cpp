class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int t = image[sr][sc];
        if(t==color){
            return image;
        }
        floodPix(image,sr,sc, color,t);
        return image;
    }
    void floodPix(vector<vector<int>>& image, int i, int j, int color, int t){
        if(i>=0 && i<image.size() && j>=0 && j<image[0].size() && image[i][j] == t ){
            image[i][j] = color;
            floodPix(image,i-1,j,color,t);
            floodPix(image,i+1,j,color,t);
            floodPix(image,i,j-1,color,t);
            floodPix(image,i,j+1,color,t);
        }
        return;
    }
};