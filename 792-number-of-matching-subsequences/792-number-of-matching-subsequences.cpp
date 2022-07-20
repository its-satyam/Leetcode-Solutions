class Solution {
public:
      int numMatchingSubseq(string s, vector<string>& words) {
        int ans = 0;
        int l1 = s.length(); //declare the length of main string
        map<string,int> m;  // declare a map to store the results of subsquences already checked
        for (auto word: words){
            int l2 = word.length(); // declare length of current word
            int j = 0;
            if (m.find(word)==m.end()){ // Check for subsequence if current word not found in map
               for (int i=0;i<l1 && j<l2;i++){   // if we reach end of current word, it means subsequence found. Hence no need to check further
                    if (s[i]==word[j]){
                        j++;
                    }
                }
                ans+=(j==l2); // check if we reach end of the word 
                m[word] = (j==l2);
            }
            else{
                ans+= m[word]; // If word is already checked before, no need to check again
            }
            
            
        }
        return ans;
    }
};