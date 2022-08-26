class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 }; 
        int d=day,m=month,y=year;
        if (m < 3) 
            y -= 1; 
      
        int n= ((y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7); 
        vector<string>s{"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
        return s[n];
    }
};