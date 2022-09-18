class Solution {
public:
    string defangIPaddr(string a) {
         for(size_t i = 0 ;; i++)
    {
        if(a[i] == '.')
        {
            a.replace(i, 1, ("[.]"));
            i++;
        }
                      
        if(i == a.size() - 1) 
            break;
    }
    
    return a;
    }
};