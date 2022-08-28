class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
         int m=mat.size(), n=mat[0].size();
        unordered_map<int, priority_queue<int, vector<int>,greater<int>>> mp; //create a priority queue to store the elements in descending order, and map it to [i-j] 
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                mp[i-j].push(mat[i][j]); //push all the elements with index [i-j] into the queue
            }
        }
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                mat[i][j]= mp[i-j].top(); //change the values of the diagonals to the top value of the queue
                mp[i-j].pop(); //delete the top element of the queue
            }
        }
        return mat;
    }
};