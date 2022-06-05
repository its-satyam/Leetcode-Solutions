class Solution {
public:
    int mySqrt(int x) {
         int i = 1, count = 0; 
    
   while(x>0)
    {
        x = x - i;
        i = i + 2;
        
        if(x>=0)
        {
            count ++;
        }
    }
    
    return count;
    }
};