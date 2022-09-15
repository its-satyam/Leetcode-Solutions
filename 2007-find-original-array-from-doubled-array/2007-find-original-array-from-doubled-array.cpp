class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
         vector<int> counter;
        for(int i=0;i<100005;i++) 
            counter.push_back(0);
        for(auto& c:changed) 
            counter[c]++;
        vector<int> sol;
        for(int i=0;i<counter.size();i++) 
        {
            while(counter[i]>0) 
            {
                if(i>100000/2) 
                    return {};
                else if(counter[i*2]<= 0) 
                    return {};
                else 
                {
                    sol.push_back(i);
                    counter[i]--;
                    counter[i*2]--;
                    if(counter[i*2]<0) 
                        return {};
                } 
            }
        }
        return sol;
    }
};