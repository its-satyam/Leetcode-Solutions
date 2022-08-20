class Solution {
public:
    int minRefuelStops(int target, int currFuel, vector<vector<int>>& stations) {
        priority_queue<int> pq;                          // To get pumps before particular point if I can't reach at any point
    stations.push_back({target, 0});                // Pushed the last station as target
    int pumps = 0;

    for(int i=0; i<stations.size(); i++) {
        currFuel -= (stations[i][0] - (i==0 ? 0 : stations[i-1][0]));            // Fuel burnt to reach next station
        while(currFuel < 0 && !pq.empty()) {                                         // If current fuel is negative means I can't reach here without refueling from prev station
            currFuel += pq.top(); pq.pop();
            pumps++;
        }
        if(currFuel < 0) return -1;
        pq.push(stations[i][1]);
    }
    return pumps;
    }
};