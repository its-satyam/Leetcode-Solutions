class Solution {
public:
    double find(int c,vector<int> count)
    {
        double i=0;
        for(i=0;i<256;i++)
        {
            if(c<=count[i])
                break;
            else
                c=c-count[i];
        }
        return i;
    }
    vector<double> sampleStats(vector<int>& count) {
        vector<double> ans(5);
        int c=0,hf=INT_MIN;
        int n=count.size();
        double maxi=INT_MIN, mini=INT_MAX;
        double mean=0,median=0,mode=0,s=0;
        for(double i=0;i<n;i++)
        {
            if(count[i]!=0)
            {
                maxi=max(i,maxi);
                mini=min(i,mini);
                s=s+(i*count[i]);
                c+=count[i];
                if(count[i]>hf)
                {
                    hf=count[i];
                    mode=i;
                }
            }
        }
        mean=s/c;
        if(c%2==0)
            median=(find(c/2,count)+find(c/2+1,count))/2;
        else
            median=find(c/2+1,count);
        ans[0]=mini;
        ans[1]=maxi;
        ans[2]=mean;
        ans[3]=median;
        ans[4]=mode;
        return ans;
    }
};