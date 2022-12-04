class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> set1{'q','w','e','r','t','y','u','i','o','p'};
        unordered_set<char> set2{'a','s','d','f','g','h','j','k','l'};
        unordered_set<char> set3{'z','x','c','v','b','n','m'};
        vector<string> res;
            
        for(string word : words)
        {
            bool flag = true;
            unordered_set<char> setTemp;
            
            if(set1.find(tolower(word[0])) != set1.end())
                setTemp = set1;
            else if(set2.find(tolower(word[0])) != set2.end())
                setTemp = set2;
            else
                setTemp = set3;
            
            for(char ch : word)
            {
                if(setTemp.find(tolower(ch)) == setTemp.end())
                {
                    flag = false;
                    break;
                }
            }
            
            if(flag)
                res.push_back(word);
        }
        
        return res;
        
//         static int a[26] = {2,4,4,2,1,2,2,2,1,2,2,2,4,4,1,1,1,1,2,1,1,4,1,4,1,4};
//         vector<string> res;
//         for (string & w: words) {
//             int i = 0;
//             for (char &c: w) {
//                 i |= a[tolower(c) - 'a'];
//                 if (i != 1 and i != 2 and i != 4) break;
//             }
//             if (i == 1 or i == 2 or i == 4) res.push_back(w);
//         }
        
//         return res;
    }
};