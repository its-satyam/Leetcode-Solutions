class SummaryRanges {
public:
    vector<vector<int>> x;
    SummaryRanges() {
        
    }
    void addNum(int value) {
        int n=x.size();
        if(n==0 || value>x[n-1][1]+1) x.push_back({value,value});
        else{
            for(int i=0;i<n;i++){
                if(value<x[i][0]-1){
                    x.insert(x.begin()+i,{value,value});
                    return;
                }
                else if(value>=x[i][0] && value<=x[i][1]) return;
                else if(value==x[i][0]-1){
                    x[i][0]--;
                    return;
                }
                else if(value==x[i][1]+1){
                    x[i][1]++;
                    if(i!=n-1 && x[i][1]>=x[i+1][0]-1){
                        x[i][1]=x[i+1][1];
                        x.erase(x.begin()+i+1);
                    }
                    return;
                }
            }
        }
    }
    vector<vector<int>> getIntervals() {
        return x;
    }
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */