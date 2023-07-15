class Solution {
public:
    bool static cmp(vector<int> &a, vector<int> &b){
        return a[0] < b[0];
    }

    

    int solveTab(vector<vector<int>>& events, int j, vector<int> &start){
        vector<vector<int>> DP(events.size()+1, vector<int>(j+1, 0));

        for(int i=events.size()-1; i>=0; i--){
            for(int k=1; k<=j; k++){
                int last = events[i][1];
                int idx = upper_bound(start.begin(), start.end(), last) - start.begin();
                int incl = events[i][2] + DP[idx][k-1];

                int excl = DP[i+1][k];

                DP[i][k] = max(incl, excl);
            }
        }

        return DP[0][j];
    }

    int maxValue(vector<vector<int>>& events, int k) {
        vector<int> start;
        for(auto i : events) start.push_back(i[0]);

        sort(start.begin(), start.end());
        sort(events.begin(), events.end(), cmp);

        // vector<vector<int>> DP(events.size(), vector<int>(k+1, -1));
        // return solve(0, events, k, start, DP);

        return solveTab(events, k, start);
    }
};