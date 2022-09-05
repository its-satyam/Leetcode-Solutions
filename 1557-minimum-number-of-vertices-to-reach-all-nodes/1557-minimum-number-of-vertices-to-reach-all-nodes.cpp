class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        unordered_map<int,int> m;
        int k = edges.size();
        for(int i=0;i<k;i++){
            m[edges[i][1]] += 100;
            m[edges[i][0]]--;
        }
        vector<int> v;
        for(int i=0;i<n;i++){
            if(m[i]<0){
                v.push_back(i);
            }
        }
        return v;
        
    }
};