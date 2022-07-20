class Solution {
public:
    int countSegments(string s) 
    {
        bool found = true;
        int x = 0;
        for(char c: s) 
        {
            if(c == ' ') 
                found = true;
            else if(found and c != ' ')
            {
                found = false;
                x++;
            }
        }
        return x;
    }
};