class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int n = scores.size();
        vector<pair<int, int>> people;
        for (int i = 0; i < n; i++) {
            people.push_back({ages[i], scores[i]});
        }
        sort(people.begin(), people.end());
        vector<int> dp(n);
        int res = 0;
        for (int i = 0; i < n; i++) {
            dp[i] = people[i].second;
            for (int j = 0; j < i; j++) {
                if (people[j].second <= people[i].second) {
                    dp[i] = max(dp[i], dp[j] + people[i].second);
                }
            }
            res = max(res, dp[i]);
        }
        return res;
    }
};