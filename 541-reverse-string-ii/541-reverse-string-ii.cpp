class Solution {
public:
    string reverseStr(string s, int k) {
        //find length of string s
        int len = s.length();
        //find extra remainders of string
        int rem = len%(2*k);
        
        //trace out actual 2k divisible length of string
        int actual = len-rem;
        
        //initialze values of the two pointer variables
        int start = 0;
        int end = 2*k;
        string s2="";
        while(actual){
            //use substr function two get the substring from the s
            string temp = s.substr(start, end );
            //reverse the generated substring
            reverse(temp.begin(),temp.begin()+k);
            
            //reinitalize the starting index for next substring
            start = start + 2*k;
            
            //add to main string after the reverse operation on the substring
            s2 = s2 + temp ;
            //take off the subtring length on which we have already worked
            actual = actual-(2*k);
        }
        
        //handle the remainder subtring which was less than 2k length seperately 
        if(rem>0){
            if(rem < k){
                string temp = s.substr(len-rem , rem);
                reverse(temp.begin(), temp.end());
                s2 = s2 + temp;
            }
            else if(rem <= 2*k){
                string temp = s.substr(len-rem , rem);
                reverse(temp.begin(), temp.begin()+k);
                s2 = s2 + temp;
            }
        }
        return s2;
    }
};