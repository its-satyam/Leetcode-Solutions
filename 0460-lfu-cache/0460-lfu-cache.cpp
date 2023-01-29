class LFUCache {
    unordered_map<int,pair<int,int>> cache; // map[key] = {value,count}
    vector<deque<int>> counter; // one deque per count
    int max_size, num_elements;

    void increment_element(int key) {
        // increment cache counter
        cache[key].second++;
        // increase size of counter if necessary
        while (counter.size() <= cache[key].second)
            counter.push_back(deque<int>());
        // add a new element into the appropriate deque
        counter[cache[key].second].push_back(key);
    }

    void remove_LFU_element() {
        bool success = false;
        // start from the front of the counter
        for (int i = 0; i < counter.size() && !success; i++) {
            // start at the front of each deque
            while (!counter[i].empty() && !success) {
                // if this count is valid, delete the entry in the cache
                if (cache[counter[i].front()].second == i) {
                    success = true;
                    cache.erase(counter[i].front());
                    num_elements--;
                }
                counter[i].pop_front(); // delete invalid and 1st valid
            }
        }
    }

public:
    LFUCache(int c) {
        max_size = c;
        num_elements = 0;
        counter = {{}};
    }

    int get(int key) {
        // if not found, return -1
        if (cache.find(key) == cache.end())
            return -1;
        // count use
        increment_element(key);
        // return the value
        return cache[key].first;
    }
    
    void put(int key, int value) {
        // protect against capacity = 0
        if (max_size == 0) return;
        // if key exists
        if (cache.find(key) != cache.end()) {
            cache[key].first = value;
            increment_element(key);
            return;
        }
        // if at capacity
        if (num_elements == max_size)
            remove_LFU_element();
        // add the new key
        cache[key] = make_pair(value,0);
        counter[0].push_back(key);
        num_elements++;
    }
};
/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */