class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int j(1);
        if(name[0] != typed[0]) 
            return false;
        for(int i = 1; i < typed.size(); i++)
        {
            if(typed[i] != name[j] and typed[i] != name[j - 1])
                return false;
            j += typed[i] == name[j];
        }             
        return j == name.size();
    }
};