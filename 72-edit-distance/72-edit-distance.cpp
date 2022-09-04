class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.length(), n = word2.length();
        int arr[n+1][m+1];
        for(int i=0;i<=m;i++)
            arr[0][i] = i;
        for(int i=0;i<=n;i++)
            arr[i][0] = i;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(word1[j-1] != word2[i-1]){
                    int minOfthree = min(arr[i][j-1], arr[i-1][j]);
                    minOfthree = min(minOfthree, arr[i-1][j-1]);
                    arr[i][j] = minOfthree+1;
                } else {
                    arr[i][j] = arr[i-1][j-1];
                }
            }
        }
        return arr[n][m];
    }
};