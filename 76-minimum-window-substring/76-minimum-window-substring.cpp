class Solution {
public:
    string minWindow(string s, string t) {
         int M = s.size() , remaining = t.size() ;
        int dp[128] ;
        memset(dp,0,sizeof(dp)) ;
        
        for(auto&k:t)
            dp[k]++ ;
        
        int left = 0 , right = 0 , count = INT_MAX , start = 0   ;

        
        while( right < M )
        {

            if(--dp[s[right]] >=0 )
                remaining-- ;
        
            
            while( remaining == 0 )
            {
                
                if( ( right-left ) < count )
                {
                    count = right-left ;
                    start = left ;
                }
                
                if(++dp[s[left++]]>0)
                    remaining++ ;
                
            }
                
            right++ ;
        }
        return ( count == INT_MAX ) ? "" : s.substr(start,count+1) ;
    }
};