class Solution {
public:
    //GraphNode
    struct GN{
        vector<int> red;
        vector<int> blue;
    };
    // Queue entry
    struct entry{
        int len;
        int node;
        int next; // 0 for both, 1 for red, 2 for blue
        
        entry(int n, int l, int nx): len(l), node(n), next(nx){};
    };
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& red_edges, vector<vector<int>>& blue_edges) {
        vector<GN> graph(n);
        vector<int> res(n, INT_MAX);
        int from, to;
        vector<bool> visitedb(n, false);
        vector<bool> visitedr(n, false);
        for(int i = 0; i < red_edges.size(); i++){
            from = red_edges[i][0];
            to = red_edges[i][1];
            graph[from].red.push_back(to);
        }
        
        for(int i = 0; i < blue_edges.size(); i++){
            from = blue_edges[i][0];
            to = blue_edges[i][1];
            graph[from].blue.push_back(to);
        }
        
        queue<entry> q;

        q.push(entry(0, 0, 0));
        int node, l, nx;
        res[0] = 0;

        while(!q.empty()){
            node = q.front().node; //Node
            l = q.front().len;           //Node distance from source
            nx = q.front().next;     // Next expected color
            q.pop();
            if(visitedr[node] && visitedb[node]) continue;

            if(nx == 0 || nx == 1){
                //Add red edges
                if(!visitedr[node]){
                    visitedr[node] = true;
                    for(int i = 0; i < graph[node].red.size(); i++){
                        to = graph[node].red[i];
                        res[to] = min(res[to], l+1);
                        q.push(entry(to, l+1, 2));
                    }
                }
                
            }
            if(nx == 0 || nx == 2){
                //Add blue
                if(!visitedb[node]){
                    visitedb[node] = true;
                    for(int i = 0; i < graph[node].blue.size(); i++){
                        to = graph[node].blue[i];
                        res[to] = min(res[to], l+1);
                        q.push(entry(to, l+1, 1));
                    } 
                }
                
            }
        }
        for(int i = 0; i < res.size(); i++){
            if(res[i] == INT_MAX) res[i] = -1;
        }
        return res;
    }
};