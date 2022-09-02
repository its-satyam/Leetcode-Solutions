class OrderedStream {
public:
     int startIndex = 0;
    vector<string> val;
    OrderedStream(int n) {
        val.resize(n + 1, "");
    }
    
    vector<string> insert(int idKey, string value) {
        vector<string> ans;
        val[idKey - 1] = value;
        while(val[startIndex] != "") {
            ans.push_back(val[startIndex++]);
        }
        return ans;
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */