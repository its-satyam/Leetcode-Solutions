class Solution {
public:
    string intToRoman(int num) {
       int n[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
        string s[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        int i=12;
        string ans="";
        while(num>0)
        {
            int div=num/n[i];
            num=num%n[i];
            while(div--)
                ans+=s[i];
            i--;
        }
        return ans;
    }
    
};