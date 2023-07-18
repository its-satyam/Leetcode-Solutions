class LRUCache {
public:
    unordered_map<int,pair<int,int>> m; // hold key={value,time(t)} 
    map<int,int> mp; // arrange the key wrt to time (t)
    int c,t=0;
    LRUCache(int capacity) {
        c=capacity;
    }
    
    int get(int k) {
        if(m.find(k)==end(m))return -1;
        mp.erase(m[k].second);
        int v=m[k].first;
        mp[t]=k;
        m[k]={v,t++};
        return m[k].first;
    }
    
    void put(int k, int v) {
        if(m.size()<c)
        {
            if(m.find(k)==end(m))
                mp[t]=k,m[k]={v,t++};
            else
                mp.erase(m[k].second),mp[t]=k,m[k]={v,t++};
        }
        else{
            if(m.find(k)==end(m))
                m.erase(begin(mp)->second),mp.erase(begin(mp)),mp[t]=k,m[k]={v,t++};
            else
                mp.erase(m[k].second),mp[t]=k,m[k]={v,t++};
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */