class Solution {
public:
    int leastInterval(vector<char>& v, int n) {
    int sz=v.size();
          if(!n)
            return sz;
          vector<int>mp(26,0);
          for(char i:v)
            ++mp[i-'A'];
          sort(mp.begin(),mp.end());
          while(!mp[0])
            mp.erase(mp.begin());
          int gapcnt=mp.back()-1,gaps=gapcnt*n;
          mp.pop_back();
          while(!mp.empty())
          {
            int i=mp.back();
            mp.pop_back();
            gaps-=min(i,gapcnt);
          }
          return gaps<0?sz:gaps+sz;
    }
};