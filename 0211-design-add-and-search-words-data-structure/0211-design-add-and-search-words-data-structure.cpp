struct Trie {
    bool eow = false;
    Trie *children[26] = {};
};

class WordDictionary {
    Trie *root, *curr;
    bool res;
public:
    WordDictionary() {
        // initialising the trie
        root = new Trie;
    }
    
    void addWord(const string &word) {
        // adding word to the trie using curr as a pointer
        curr = root;
        for (char c: word) {
            c -= 'a';
            if (!curr->children[c]) curr->children[c] = new Trie();
            curr = curr->children[c];
        }
        curr->eow = true;
    }
    
    bool search(const string &word, int start = 0) {
        // base case: we start the search and thus set res to false
        if (!start) {
            res = false;
            curr = root;
        }
        // base case: we already found a match, so we stop recursing
        if (res) return res;
        // base case: we are done parsing the string
        if (start == word.size()) return curr->eow;
        // general case:
        char c = word[start];
        // wild card character
        if (c == '.') {
            Trie *origCurr = curr;
            for (auto child: curr->children) {
                if (!child) continue;
                curr = child;
                res |= this->search(word, start + 1);
                // stopping if we found a result already
                if (res) break;
            }
            // backtracking curr
            curr = origCurr;
            return res;
        }
        // any other character
        c -= 'a';
        if (!curr->children[c]) return false;
        curr = curr->children[c];
        return this->search(word, start + 1);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */