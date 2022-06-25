class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
      int five = 0;
        int ten = 0;
        int twenty = 0;
        
        for(int i=0; i<bills.size(); i++)
        {
            if(bills[i] == 5)
            {
                five++;
            }
            else if(bills[i] == 10)
            {
                ten++;
                if(five >= 1)
                {
                    five--;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                twenty++;
                if(ten >= 1 && five >= 1)//15 = 5+10
                {
                    five--;
                    ten--;
                }
                else if(five>=3)//15 = 5+5+5
                {
                    five = five-3;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;  
    }
};