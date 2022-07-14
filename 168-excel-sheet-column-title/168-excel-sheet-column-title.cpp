class Solution {
public:
    string convertToTitle(int columnNumber) {
         string result = "";
        while(columnNumber)
        {
            char c = (columnNumber-1)%26 +65;
            result = c+result;
            columnNumber = (columnNumber-1)/26;
        }
        return result;
    }
};