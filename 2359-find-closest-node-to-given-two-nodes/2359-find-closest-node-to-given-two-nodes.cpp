class Solution {
public:
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
         vector<int> vec1(edges.size(),-1);
      vector<int> vec2(edges.size(),-1);
         vector<bool> visit(edges.size(),0);                 
        int cur = node1;
        int dist = 0;
       while(cur!=-1){ 
           if(visit[cur])break;
          vec1[cur] = dist;
            visit[cur] = 1;
          dist++;
          cur = edges[cur];
       }
        
    for(int i=0;i<edges.size();i++)visit[i] = 0;
        
        
       cur = node2;
       dist = 0;
       while(cur!=-1){ 
           if(visit[cur])break;
          vec2[cur] = dist;
           visit[cur] = 1;
          dist++;
          cur = edges[cur];
       }
    
        
        int x = INT_MAX;
        int in = -1;
        
        for(int i = 0;i<edges.size();i++){
           if(vec1[i]==-1 || vec2[i]==-1)continue;
           if(max(vec1[i],vec2[i])<x){
               in = i;
               x = max(vec1[i],vec2[i]);
           }  
        }
       
        return in;
    }
};