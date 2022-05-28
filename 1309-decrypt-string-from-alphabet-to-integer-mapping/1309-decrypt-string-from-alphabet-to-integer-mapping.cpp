class Solution {
public:
    string freqAlphabets(string s) {
        //48->57 : number
        //97->122: alphabet
         
        
        string res = "";
		int i = 0;
		while(i < s.size()){
			if(i + 2 < s.size() && s[i + 2] == '#')
            {
				int t = (s[i] - '0') * 10 + (s[i + 1] -  '0');
				res += char(t + 96); 
				i += 3;
			}
			else
            {
				res += char((s[i] - '0') + 96);
				i++;
			}
		}
		return res;
    }
};