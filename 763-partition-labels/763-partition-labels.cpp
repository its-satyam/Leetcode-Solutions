class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>lastOccur(26,-1);
        for(int i=0;i<s.size();i++){
            lastOccur[s[i]-'a']=i;
        }
        vector<int>ans;
        int prev=-1,max=0;
        for(int i=0;i<s.size();i++){
            if(lastOccur[s[i]-'a']>max){
                max=lastOccur[s[i]-'a'];
            }
            if(i==max){
                ans.push_back(i-prev);
                prev=i;
            }
        }
        return ans;
    }
};