class Solution {
public:
        bool check(string s, string w) {
		int i1 = 0, i2 = 0;
		while(true) {
			if(i2 == w.length()) 
                return true;
			int a = s.find(w[i2], i1);
			if(a < 0) 
                return false;
			else {
				i2 ++;
				i1 = a + 1;
			}
		}
		return true;
	}
	int numMatchingSubseq(string s, vector<string>& words) {
		int count = 0;
		for(int i = 0; i < words.size(); i++) 
            if(check(s, words[i]) == true) 
                count ++;
		return count;
    }
};