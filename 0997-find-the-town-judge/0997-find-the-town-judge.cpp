class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> outdegree(n+1,0);  //for storing outgoing edges from a vertex
        vector<int> indegree(n+1,0);  //for storing incoming edges to a vertex
        for(int i=0;i<trust.size();i++){
            outdegree[trust[i][0]]++;
            indegree[trust[i][1]]++;
        }
        for(int i=1; i<=n;i++){      
            if(outdegree[i]==0 && indegree[i]==n-1){   // outdegree should be 0(judge trusts nobody) and indegree should be n-1(Everybody (except for the town judge) trusts the town judge) 
                return i;
            }
        }
        return -1;
    }
};