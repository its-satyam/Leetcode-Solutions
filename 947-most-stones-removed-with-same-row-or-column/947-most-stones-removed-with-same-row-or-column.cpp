class Solution {
public:
         
    // Find root of x
    int find(vector<int>& parent, int x){
        if(parent[x] != -1){
            parent[x] = find(parent, parent[x]);
            return parent[x];
        }
        
        return x;        
    }
    
    // Union merge
    void union_merge(vector<int>& parent, vector<int>& rank, int x, int y){
        if(rank[x] > rank[y]) {
            parent[y] = x;
        }else if(rank[x] < rank[y]){
            parent[x] = y;
        }else{
            parent[y] = x;
            rank[x]++;
        }
    }
    
	// Main function
    int removeStones(vector<vector<int>>& stones) {
        int n = stones.size();
        
        vector<int> parent(20002, -1); // x [0-10000] , y [10001 - 20001]
        vector<int> rank(20002, 0);
        
        for(auto s : stones){
            int x = s[0];
            int y = s[1] + 10001;
            x = find(parent, x); // Find root of x
            y = find(parent, y); // Find root of y
            
            // Merge 2 sets if root(x) != root(y)
            if(x != y){
                union_merge(parent, rank, x, y);
            }                        
        }
        
        unordered_set<int> set; // Unique set of subsets' roots
        for(auto s : stones){
            int x = s[0];
            x = find(parent, x);
            
            set.insert(x); // To check number of subsets (different roots)
        }
        
        return n - set.size();
    }
};