class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end());
        int last = points[0][1];
        int cnt = 1;
        for(auto &i: points){
            if(i[0] > last){
                cnt++;
                last = i[1];
            }
            last = min(last, i[1]);
        }
        return cnt;
    }
};