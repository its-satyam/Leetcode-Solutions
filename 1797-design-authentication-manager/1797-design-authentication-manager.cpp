class AuthenticationManager {
public:
     int alive;
    unordered_map<string,int> tokens;
    AuthenticationManager(int timeToLive) {
        alive=timeToLive;
    }
    
    void generate(string tokenId, int currentTime) {
        tokens[tokenId]=currentTime+alive;
    }
    
    void renew(string tokenId, int currentTime) {
        if(tokens.find(tokenId)!=tokens.end() && tokens[tokenId]>currentTime){
            tokens[tokenId]=currentTime+alive;
        }
    }
    
    int countUnexpiredTokens(int currentTime) {
        int count=0;
        for(auto currToken : tokens){
            if(currToken.second>currentTime){
                count++;
            }
        }
        return count;
    }
};

/**
 * Your AuthenticationManager object will be instantiated and called as such:
 * AuthenticationManager* obj = new AuthenticationManager(timeToLive);
 * obj->generate(tokenId,currentTime);
 * obj->renew(tokenId,currentTime);
 * int param_3 = obj->countUnexpiredTokens(currentTime);
 */