class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int n=rectangles.size();
        int ans=0,nums=0;
        for(int i=0;i<n;i++)
        {
            int temp=min(rectangles[i][0],rectangles[i][1]);
            ans=max(temp,ans);
        }
        for(int i=0;i<n;i++)
        {
            int temp=min(rectangles[i][0],rectangles[i][1]);
            if(temp==ans)
                nums++;
        }
        return nums;
    }
};