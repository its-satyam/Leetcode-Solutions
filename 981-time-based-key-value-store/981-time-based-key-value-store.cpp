class TimeMap {
private:
	unordered_map<string, vector<pair<int, string>>> hash;

public:
	TimeMap() {

	}

	void set(string key, string value, int timestamp) {
		hash[key].emplace_back(make_pair(timestamp, value));
	}

	string get(string key, int timestamp) {
		vector<pair<int, string>>&vec = hash[key];
		auto it = upper_bound(vec.begin(), vec.end(), make_pair(timestamp, string({127})));
		if (it != vec.begin()) {
			return (it - 1) -> second;
		}
		return "";
	}
};
/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */