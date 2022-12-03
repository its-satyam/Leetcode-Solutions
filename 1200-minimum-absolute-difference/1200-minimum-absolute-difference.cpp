class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> vec;
        vector<int> v;
        sort(arr.begin(),arr.end());
        int diff = INT_MAX;
        for(int i = 0; i< arr.size()-1; i++){
            diff = min(diff,abs(arr[i] - arr[i+1]));
        }
        for(int i = 0; i< arr.size()-1; i++){
            if(diff == abs(arr[i]-arr[i+1])){
                v.push_back(arr[i]);
                v.push_back(arr[i+1]);
                vec.push_back(v);
                v.clear();
            }

        }
       return vec; 
    }
};