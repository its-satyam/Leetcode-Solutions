class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int total=0,maxi=0;
        for(int i=0;i<n;i++)
        {
            total=0;
            string p=sentences[i];
            for(int j=0;j<p.length();j++)
            {
                if(p[j]==' ')
                    total++;
            }
            total++;
            if(maxi<total)
                maxi=total;
        }
        return maxi;
    }
};