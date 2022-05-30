class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
         int n=points.size();
        int min=-1;
        int min_dis=INT_MAX;
        int dis=0;
        for(int i=0;i<n;i++)
        {
            if(points[i][0]==x || points[i][1]==y)
            {
                dis=abs(x-points[i][0])+abs(y-points[i][1]);
                if(dis<min_dis)
                {
                    min_dis=dis;
                    min=i;
                }
            }
        }
        return min;
    }
};