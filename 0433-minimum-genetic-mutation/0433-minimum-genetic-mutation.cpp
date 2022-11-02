class Solution {
public:
   unordered_set<string>st;
  
  int minMutation(string start, string end, vector<string>& bank) {
    for(auto &w: bank) st.insert(w);
    
    int level = 0;
    queue<string>q;
    q.push(start);
    while(!q.empty()){
      int n = q.size();
      while(n--){
        string s = q.front(); q.pop();
        if(s == end) return level;
        st.erase(s);
        
        for(int i = 0; i != 8; i++){
          char tmp = s[i];
          s[i] = 'A';
          if(st.count(s)) q.push(s), st.erase(s);
          s[i] = 'C';
          if(st.count(s)) q.push(s), st.erase(s);
          s[i] = 'G';
          if(st.count(s)) q.push(s), st.erase(s);
          s[i] = 'T';
          if(st.count(s)) q.push(s), st.erase(s);
          s[i] = tmp;
        }
      }
      level++;
    }
    
    return -1;
  }
};