class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int, int> MAP;
        for (int i = 0; i < deck.size(); ++i)
            MAP[deck[i]]++;
        int GCD = MAP[deck[0]];
        for (int i = 1; i < deck.size(); ++i)
            GCD = gcd(GCD, MAP[deck[i]]);
        return GCD >= 2;
    }
};