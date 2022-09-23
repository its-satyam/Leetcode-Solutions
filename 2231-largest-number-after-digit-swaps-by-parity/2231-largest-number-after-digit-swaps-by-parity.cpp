class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int>pq1;
        priority_queue<int>pq2;
        
        string s=to_string(num);
        int i=0;
        int n=s.size();
        while(n)
        {  if(s[i]%2!=0)
                pq1.push(s[i]);
            else
                pq2.push(s[i]);
                i++;
         n--;
        }
         i=0;
        string ans;
        while(!pq1.empty()||!pq2.empty())
        {
            if(s[i]%2!=0)
            {
                ans+=pq1.top(); 
                pq1.pop();
            }
            else
            {
                ans+=pq2.top();
                pq2.pop();
            }
            i++;
        }
        
        return stoi(ans);
    }
};