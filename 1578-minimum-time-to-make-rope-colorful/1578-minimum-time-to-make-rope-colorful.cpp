class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        vector<int> temp;
        int sn=colors.length();
        int sub=0,sum=0;
        for(int i=0;i<sn-1;i++)
        {
            if(colors[i]==colors[i+1])
            {
                temp.push_back(neededTime[i]);
                if(i+1==sn-1)
                {
                    temp.push_back(neededTime[i+1]);
                    sub+=*max_element(temp.begin(),temp.end());
                    temp.clear();
                }
            }
            else if(colors[i]!=colors[i+1])
            {
                temp.push_back(neededTime[i]);
                sub+=*max_element(temp.begin(),temp.end());
                temp.clear();
                if(i+1==sn-1)
                    sub+=neededTime[i+1];
            }
            sum+=neededTime[i];
        }
        sum+=neededTime[sn-1];
        return sum-sub;
    }
};